/*
 * REBECCA DSOUZA
 * ROLL NO 18
 * BATCH B
 * SE COMPS
 * */
#include<stdio.h>
struct pair
{
    int min;
    int max;
};

struct pair getMinMax(int arr[], int low, int high)
{
    struct pair minmax, left, right;
    int mid;int i;

    /* If there is only on element */
    if (low == high)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];
        printf("Element is %d\n",arr[low]);
        printf ("MIN is %d MAX is %d\n",arr[low],arr[low]);
        return minmax;
    }

    /* If there are two elements */
    if (high == low + 1)
    {
        if (arr[low] > arr[high])
        {
            minmax.max = arr[low];
            minmax.min = arr[high];

        }
        else
        {
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        printf("Element is %d and %d\n",arr[low],arr[high]);
        printf ("MIN is %d MAX is %d\n",minmax.min,minmax.max);
        return minmax;
    }

    /* If there are more than 2 elements */
    mid = (low + high)/2;
    left = getMinMax(arr, low, mid);
    right = getMinMax(arr, mid+1, high);
    for(i=low;i<=high;i++){
        if(i==1+low/2+high/2){
            printf("|");
        }
        printf("%d ",arr[i]);
    }

    /* compare minimums of two parts*/
    if (left.min < right.min)
        minmax.min = left.min;
    else
        minmax.min = right.min;

    /* compare maximums of two parts*/
    if (left.max > right.max)
        minmax.max = left.max;
    else
        minmax.max = right.max;

    printf ("\nMIN is %d MAX is %d\n",minmax.min,minmax.max);
    return minmax;
}
int main()
{
    int n;int i;
    printf("Enter the no. of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    struct pair minmax = getMinMax(a,0,n-1);
    printf("\nMinimum element of the entire array is %d", minmax.min);
    printf("\nMaximum element of the entire array is %d", minmax.max);

}
