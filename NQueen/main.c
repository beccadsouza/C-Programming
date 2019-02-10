#include<stdio.h>
#include<stdbool.h>
#include <stdlib.h>
/*
 * Created by Rebecca D'souza on 30/03/18
 * */
int top = -1;
struct Queen{
    int row;
    int column;
    int id;
};
struct Queen stack[1000];
void print(struct Queen queen){
    printf("Queen %d is placed at [%d,%d]\n",queen.id,queen.row,queen.column);
}
void push(struct Queen queen){
    stack[++top] = queen;
}
struct Queen pop(){
    return stack[top--];
}
bool noConflict(struct Queen queen){
    for(int i = 0;i<top+1;i++)
        if(stack[i].id<queen.id) {
            struct Queen x = stack[i];
            if (x.column==queen.column||abs(queen.row-x.row)==abs(queen.column-x.column))
                return false;
        }
    return true;
}
void main() {
    int N , filled = 1;
    scanf("%d",&N);
    bool repeat;
    struct Queen queen[N + 1];
    queen[1].id = 1;
    queen[1].row = 1;
    queen[1].column = 1;
    push(queen[1]);
    while (filled < N) {
        repeat = true;
        queen[filled + 1].id = filled + 1;
        queen[filled + 1].row = filled + 1;
        queen[filled + 1].column = 1;
        push(queen[filled + 1]);
        while (repeat)
            if (noConflict(stack[top])) {
                filled++;
                repeat = false;
            } else if (stack[top].column != N) {
                stack[top].column++;
                if (noConflict(stack[top])) {
                    filled++;
                    repeat = false;
                }
            } else if (stack[top].column == N) {
                pop();
                filled--;
                if (stack[top].column == N) {
                    pop();
                    filled--;
                }
                stack[top].column++;
                repeat = true;
            }
    }
    for (int x = 0; x < top+1; x++)
        print(stack[x]);
    printf("\n");
    for(int i = 0;i<N;i++)
        printf(" _");
    printf("\n");
    for (int i = top; i >= 0; i--) {
        for (int j = 1; j < N+1; j++)
            if (j == stack[i].column)
                printf("|Q");
            else printf("|_");
        printf("|\n");
    }
    printf("\n");
}