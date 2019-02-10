#include <stdio.h>
#define OO 10000
/*
 * Created by Rebecca D'souza on 22/03/18
 * */
struct cell{
    int val;
    int index;
};
int stack[100],top=-1;
void push(int a){
    stack[++top] = a;
}
int pop(){
    return stack[top--];
}
int main() {
    int n = 0, k = 0;
    scanf("%d%d",&n,&k);
    int a[n+1];
    for(int i = 0;i<n+1;i++)
        stack[i]=0;
    for(int i =1;i<n+1;i++)
        scanf("%d",&a[i]);
    struct cell grid[n+1][k+1] ;
    for(int i = 0;i <n+1;i++){
        for(int j = 0;j<k+1;j++){
            grid[i][j].val = OO;
            grid[i][j].index = 0;
        }
    }
    grid[0][0].val = 0;
    for(int j = 1;j<k+1;j++){
        for(int i = 1;i<n+1;i++){
            int min = OO;
            int index = 0;
            for(int p = i;p>0;p--){
                int temp = grid[p-1][j-1].val + (a[i]-a[p])*(a[i]-a[p]);
                if(temp <= min){
                    min = temp;
                    index = p;
                }
            }
            grid[i][j].val = min;
            grid[i][j].index = index;
        }
    }
    printf("\nVALUES\n");
    for(int i = 0;i <n+1;i++){
        for(int j = 0;j<k+1;j++)
            printf(grid[i][j].val==OO?"OO\t":"%d\t",grid[i][j].val);
        printf("\n");
    }
    printf("\nINDICES\n");
    for(int i = 0;i <n+1;i++){
        for(int j = 0;j<k+1;j++)
            printf("%d\t",grid[i][j].index);
        printf("\n");
    }
    int y = k;
    int x = n;
    while(x!=0){
        push(grid[x][y].index);
        x = grid[x][y].index-1;
        y--;
    }
    printf("\nPartitioning of clusters : \n");
    for(int i = 1;i<n+1;i++){
        if(i==stack[top]){
            printf("| ");
            pop();
        }
        printf("%d ",a[i]);
    }
    printf("|\n\nMinimum cost is : %d\n",grid[n][k].val);
    return 0;
}