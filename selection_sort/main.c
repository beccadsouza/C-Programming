#include<stdio.h>
#include<time.h>

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void selectSort(int arr[],int n){
    int i,j,index;
    for(i=0;i<n-1;i++){
        index = i;
        for(j=i+1;j<n;j++)
            if(arr[j]<arr[index])
                index = j;
        swap(&arr[i],&arr[index]);
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
    selectSort(arr,n);
    printf("\n\nSorted elements in ascending order :\n\n");
    printSort(arr,n);
    end = clock();
    printf("\n\nTime taken is %f seconds",((double) (end - start)) / CLOCKS_PER_SEC);
}
