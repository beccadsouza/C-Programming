#include<stdio.h>
#include<stdbool.h>

struct edge{
    int src;
    int dest;
    int wt;
};

int noVertices,noEdges;

void prims(int edges[noVertices+1][noVertices+1],int noVertices,int src){

    int MSTcost = 0,min = 10000,par=0;
    bool found = false;
    bool visited[noVertices+1];
    for(int i = 1;i <= noVertices;i++)
        visited[i] = false;
    visited[src] = true;
    for (int i = 1; i <= noVertices; i++) {
        if (visited[i])
            for (int k = 1; k <= noVertices; k++)
                if (edges[i][k] < min && !visited[k]) {
                    min = edges[i][k];
                    par = i;
                    src = k;
                    found = true;
                }
        if (i == noVertices && found) {
            printf("\nEdge joining vertices %d and %d having weight %d has been selected.",src,par,min);
            MSTcost += min;
            found = false;
            visited[src] = true;
        }
        if (i == noVertices)
            for (int j = 1; j < noVertices + 1; j++)
                if (!visited[j]) {
                    i = 0;
                    min = 10000;
                }
    }
    printf("\n\nThe weight of the minimum spanning tree is %d\n",MSTcost);

}

void kruskals(struct edge queue[],int MSTedges,int noVertices,int noEdges){

    int v1,v2,u1,u2,MSTcost = 0,count = 0;
    int parent[noVertices+1];
    for(int i = 1;i <= noVertices;i++)
        parent[i] = 0;
    for(int i = 0;i<noEdges;i++)
        for(int j = 0;j<noEdges-1;j++)
            if(queue[j].wt>queue[j+1].wt){
                struct edge temp;
                temp = queue[j];
                queue[j] = queue[j+1];
                queue[j+1] = temp;
            }
    while(MSTedges<noVertices){
        struct edge curr = queue[count++];
        u1 = v1 = curr.src;
        u2 = v2 = curr.dest;
        while(parent[v1]!=0)
            v1 = parent[v1];
        while(parent[v2]!=0)
            v2 = parent[v2];
        if(v1!=v2){
            printf("\nEdge joining vertices %d and %d having weight %d has been selected.",u1,u2,curr.wt);
            MSTedges++;
            MSTcost += curr.wt;
            parent[u1] = u2;
        }
        else
            printf("\nEdge joining vertices %d and %d having weight %d has been rejected.",u1,u2,curr.wt);
    }
    if(count<noEdges){
        struct edge curr = queue[count++];
        printf("\nEdge joining vertices %d and %d having weight %d has been rejected.",curr.src,curr.dest,curr.wt);
    }
    printf("\n\nThe weight of the minimum spanning tree is %d\n",MSTcost);

}

int main(){

    int u,v,w,src,option=0;
    printf("Enter number of vertices : ");
    scanf("%d",&noVertices);
    printf("Enter number of edges : ");
    scanf("%d",&noEdges);

    int parent[noVertices+1];
    int edges[noVertices+1][noVertices+1];
    struct edge queue[noEdges];

    for(int i = 0;i<noVertices+1;i++)
        parent[i] = 0;
    for(int i = 0;i<noVertices+1;i++)
        for(int j = 0;j<noVertices+1;j++)
            edges[i][j] = 10000;


    printf("\nv1 v2 wt");
    for(int i = 0;i<noEdges;i++){
        scanf("%d%d%d",&u,&v,&w);
        if (u != v) {
            queue[i].dest = u;
            queue[i].src = v;
            queue[i].wt = w;
            edges[u][v] = edges[u][v]<w?edges[u][v]:w;
            edges[v][u] = edges[u][v]<w?edges[u][v]:w;
        }
    }
    printf("\n1. Prims\n2. Kruskals\n3. Exit\n");
    scanf("%d",&option);
    while(option!=3) {
        switch(option) {
            case 1:
                printf("\n\nEnter starting vertex for prims algorithm : ");
                scanf("%d", &src);
                printf("\nPRIMS ALGORITHM\n");
                prims(edges, noVertices, src);
                break;
            case 2:
                printf("\nKRUSKALS ALGORITHM\n");
                kruskals(queue, 1, noVertices, noEdges);
                break;
            case 3: break;
        }
        printf("\n1. Prims\n2. Kruskals\n3. Exit\n");
        scanf("%d",&option);
    }
    return 0;

}
/*
students@CE-Lab6-608-U20:~$ gcc Main.c
students@CE-Lab6-608-U20:~$ ./a.out
Enter number of vertices : 5
Enter number of edges : 7

v1 v2 wt
1 2 20
1 3 50
1 4 70
1 5 90
2 3 30
3 4 40
4 5 60

1. Prims
2. Kruskals
3. Exit
2

KRUSKALS ALGORITHM

Edge joining vertices 2 and 1 having weight 20 has been selected.
Edge joining vertices 3 and 2 having weight 30 has been selected.
Edge joining vertices 4 and 3 having weight 40 has been selected.
Edge joining vertices 3 and 1 having weight 50 has been rejected.
Edge joining vertices 5 and 4 having weight 60 has been selected.
Edge joining vertices 4 and 1 having weight 70 has been rejected.
Edge joining vertices 5 and 1 having weight 90 has been rejected.

The weight of the minimum spanning tree is 150

1. Prims
2. Kruskals
3. Exit
1


Enter starting vertex for prims algorithm : 5

PRIMS ALGORITHM

Edge joining vertices 4 and 5 having weight 60 has been selected.
Edge joining vertices 3 and 4 having weight 40 has been selected.
Edge joining vertices 2 and 3 having weight 30 has been selected.
Edge joining vertices 1 and 2 having weight 20 has been selected.

The weight of the minimum spanning tree is 150

1. Prims
2. Kruskals
3. Exit
1


Enter starting vertex for prims algorithm : 2

PRIMS ALGORITHM

Edge joining vertices 1 and 2 having weight 20 has been selected.
Edge joining vertices 3 and 2 having weight 30 has been selected.
Edge joining vertices 4 and 3 having weight 40 has been selected.
Edge joining vertices 5 and 4 having weight 60 has been selected.

The weight of the minimum spanning tree is 150

1. Prims
2. Kruskals
3. Exit
3
students@CE-Lab6-608-U20:~$ gcc Main.c
students@CE-Lab6-608-U20:~$ ./a.out
Enter number of vertices : 4
Enter number of edges : 6

v1 v2 wt
1 2 5
1 3 3
4 1 6
2 4 7
3 2 4
3 4 5

1. Prims
2. Kruskals
3. Exit
2

KRUSKALS ALGORITHM

Edge joining vertices 3 and 1 having weight 3 has been selected.
Edge joining vertices 2 and 3 having weight 4 has been selected.
Edge joining vertices 2 and 1 having weight 5 has been rejected.
Edge joining vertices 4 and 3 having weight 5 has been selected.
Edge joining vertices 1 and 4 having weight 6 has been rejected.

The weight of the minimum spanning tree is 12

1. Prims
2. Kruskals
3. Exit
1


Enter starting vertex for prims algorithm : 3

PRIMS ALGORITHM

Edge joining vertices 1 and 3 having weight 3 has been selected.
Edge joining vertices 2 and 3 having weight 4 has been selected.
Edge joining vertices 4 and 3 having weight 5 has been selected.

The weight of the minimum spanning tree is 12

1. Prims
2. Kruskals
3. Exit
1


Enter starting vertex for prims algorithm : 4

PRIMS ALGORITHM

Edge joining vertices 3 and 4 having weight 5 has been selected.
Edge joining vertices 1 and 3 having weight 3 has been selected.
Edge joining vertices 2 and 3 having weight 4 has been selected.

The weight of the minimum spanning tree is 12

1. Prims
2. Kruskals
3. Exit
3
students@CE-Lab6-608-U20:~$

*/