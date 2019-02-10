#include <stdio.h>
int n, array[100],temp[100], no_comp = 0;

void printArray(int arr[]){
    for(int i=0; i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}

void mergeHalves(int array[], int temp[], int leftStart, int rightEnd){
    int leftEnd = (leftStart+rightEnd)/2;
    int rightStart = leftEnd+1;
    int size = rightEnd-leftStart+1;
    int index,left = index = leftStart;
    int right = rightStart;
    while(left<=leftEnd&&right<=rightEnd){
        if (array[left] <= array[right]){
            temp[index] = array[left];
            left++;
        }
        else{
            temp[index] = array[right];
            right++;
        }
        index++;
        no_comp++;
    }
    while(left<=leftEnd){
        temp[index] = array[left];
        left++;
        index++;
    }
    while(right<=rightEnd){
        temp[index] = array[right];
        right++;
        index++;
    }
    for(int i = leftStart; i<=rightEnd;i++)
        array[i] = temp[i];
    printArray(array);
}

void mergeSort(int array[],int temp[],int leftStart, int rightEnd){
    if(leftStart>=rightEnd)
        return;
    int middle = (leftStart+rightEnd)/2;
    mergeSort(array,temp,leftStart,middle);
    mergeSort(array,temp,middle+1,rightEnd);
    mergeHalves(array,temp,leftStart,rightEnd);
}

void baseMergeSort(int array[]){
    mergeSort(array,temp,0,n-1);
}


int main() {
    printf("Enter number of elements\n");
    scanf("%d",&n);
    printf("\nEnter the elements\n");
    for(int i = 0;i<n;i++)
        scanf("%d",&array[i]);
    printf("\nMerging :\n");
    baseMergeSort(array);
    printf("\nFinal sorted list is :\n");
    printArray(array);
    printf("No of comparisons made : %d",no_comp);
    return 0;
}

