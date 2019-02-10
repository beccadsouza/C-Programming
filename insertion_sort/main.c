#include<stdio.h>
#include <time.h>
int count = 0;
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    count++;
}

void insertSort(int arr[],int n){
    int i,j;
    for(i=1;i<n;i++){
        j = i;
        while(j>0){
            if(arr[j]<arr[j-1])
                swap(&arr[j],&arr[j-1]);
            j--;
        }
    }
}

void printSort(int arr[],int n){
    int i;
    for(i=0;i<n;i++)
        printf("%d  ",arr[i]);
}

void main(){
    clock_t start, end;
    start = clock();
    int arr[100],i,n;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("\nEnter %d elements\n\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    insertSort(arr,n);
    printf("\nSorted elements in ascending order :\n\n");
    printSort(arr,n);
    end = clock();
    printf("\n\nTime taken is %f seconds",((double) (end - start)) / CLOCKS_PER_SEC);
    printf("\nCount = %d",count);
}




