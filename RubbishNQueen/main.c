#include<stdio.h>
#include<stdlib.h>
int count,n,board[50];
/*
 * Created by Rebecca D'souza on 5/4/18
 * */
void printBoard() {
    printf("\n\nSolution %d:\n",++count);
    for(int i = 1;i<n+1;i++)
        printf(" _");
    printf("\n");
    for(int i=1;i<n+1;i++) {
        for(int j=1;j<n+1;j++)
            if(board[i]==j) printf("|Q");
            else printf("|_");
        printf("|\n");
    }
}
int noConflict(int row,int column) {
    for(int i=1;i<row;i++)
        if(board[i]==column || abs(board[i]-column)==abs(i-row))
            return 0;
    return 1;
}
void placeQueen(int row){
    for(int column=1;column<n+1;column++)
        if(noConflict(row,column)){
            board[row]=column;
            if(row==n)
                printBoard();
            else
                placeQueen(row+1);
        }
}
int main() {
    printf("Enter number of Queens\n");
    scanf("%d",&n);
    placeQueen(1);
}