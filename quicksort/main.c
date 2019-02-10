#include<stdio.h>
#include <stdbool.h>

int n,no_swaps=0;

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    no_swaps++;
}

void printArray(int data[],int s,int e){
    int i;
    for(i = s;i<=e;i++)
        printf("%d ",data[i]);
}

int partition(int data[],int left,int right){
    int pivot = left;
    left += 1;
    while(true){
        while(data[left]<data[pivot] && left<=right)
            left++;
        while(data[right]>data[pivot] && left<=right)
            right--;
        if (right < left)
            break;
        else
            swap(&data[left],&data[right]);
    }
    swap(&data[pivot],&data[right]);
    return right;
}

void quickSort(int data[],int start,int end){
    if(start<end){
        printf("\n\nTaking pivot as %d\n",data[start]);
        printArray(data,start,end);
        printf("\nis partitioned into \n");
        int q = partition(data,start,end);
        printArray(data,start,q-1);
        printf("[%d] ",data[q]);
        printArray(data,q+1,end);
        quickSort(data,start,q-1);
        quickSort(data,q+1,end);
    }
    else if(start==end){
        printf("\n[%d] cant be partitioned any further",data[start]);
    }
}

void main(){
    int i, data[100];
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&data[i]);
    quickSort(data,0,n-1);
    printf("\n\nSorted list : ");
    printArray(data,0,n-1);
    printf("\nTotal number of swaps : %d\n",no_swaps);
}

/*
Enter number of elements
9
9

Enter the elements
40 20 10 80 60 50 7 30 100
40 20 10 80 60 50 7 30 100


Taking pivot as 40
40 20 10 80 60 50 7 30 100
is partitioned into
7 20 10 30 [40] 50 60 80 100

Taking pivot as 7
7 20 10 30
is partitioned into
[7] 20 10 30

Taking pivot as 20
20 10 30
is partitioned into
10 [20] 30
[10] cant be partitioned any further
[30] cant be partitioned any further

Taking pivot as 50
50 60 80 100
is partitioned into
[50] 60 80 100

Taking pivot as 60
60 80 100
is partitioned into
[60] 80 100

Taking pivot as 80
80 100
is partitioned into
[80] 100
[100] cant be partitioned any further

Sorted list : 7 10 20 30 40 50 60 80 100
Total number of swaps : 8

Process finished with exit code 27
 */