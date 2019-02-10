/*
 * REBECCA D'SOUZA
 * ROLL NO 18
 * BATCH B
 * SE COMPS
 * */
#include<stdio.h>
#include<stdbool.h>
struct kp{
    float weight;
    float value;
    float benefit;
    int item_no;
};
int n,W;
struct kp items[100];
/*sorting all the items according to pi/wi*/
void sort(struct kp items[]){
    int i,j;
    for(i = 0;i<n-1;i++){
        for(j = 0;j<n-1;j++){
            if(items[j].benefit<items[j+1].benefit){
                struct kp temp = items[j];
                items[j] =  items[j+1];
                items[j+1] = temp;
            }
        }
    }
}
/*calculation of maximum profit the fractional knapsack way*/
void knapsack(struct kp items[]){
    int i,capacity=W;
    float profit = 0.0,ratio;
    bool flag = false;
    for(i = 0;i<n;i++){
        if(capacity>=items[i].weight){
            capacity -= items[i].weight;
            profit += items[i].value;
            printf("Item %d with weight %f has been added to the knapsack contributing a profit of %f\n",items[i].item_no,items[i].weight,items[i].value);
        }
        else{
            flag = true;
            break;
        }
    }
/*breaking of items*/
    if(flag){
        ratio = (float)capacity/items[i].weight;
        printf("%f of Item %d with weight %f has been added to the knapsack contributing a profit of %f\n",ratio,items[i].item_no,items[i].weight,items[i].value*ratio);
        profit += items[i].value *ratio;
    }
    printf("\n\nTotal profit made = %.2f\n",profit);
}
void printItems(struct kp items[]){
    int i;
    printf("ITEMS\tWT\tVAL\tBENEFIT\n");
    for(i = 0;i<n;i++)
        printf("Item%d\t%.0f\t%.0f\t%.2f\n",items[i].item_no,items[i].weight,items[i].value,items[i].benefit);
    printf("\n");
}
void main(){
    int i;
    printf("Enter number of items :");
    scanf("%d",&n);
    printf("Enter weight & value\n");
    for(i = 0;i<n;i++){
        scanf("%f%f",&items[i].weight,&items[i].value);
        items[i].item_no = i+1;
        items[i].benefit = items[i].value/items[i].weight;
    }
    printf("Enter knapsack capacity : ");
    scanf("%d",&W);
    printf("\nEntered values are : \n\n");
    printItems(items);
    sort(items);
    printf("\nAfter sorting all the items according to pi/wi : \n\n");
    printItems(items);
    knapsack(items);
}
/*
Enter number of items :5
Enter weight & value
5 30
10 20
20 100
30 90
40 160
Enter knapsack capacity :60

Entered values are :

ITEMS   WT      VAL     BENEFIT
Item1   5       30      6.00
Item2   10      20      2.00
Item3   20      100     5.00
Item4   30      90      3.00
Item5   40      160     4.00


After sorting all the items according to pi/wi :

ITEMS   WT      VAL     BENEFIT
Item1   5       30      6.00
Item3   20      100     5.00
Item5   40      160     4.00
Item4   30      90      3.00
Item2   10      20      2.00

Item 1 with weight 5.000000 has been added to the knapsack contributing a profit of 30.000000
Item 3 with weight 20.000000 has been added to the knapsack contributing a profit of 100.000000
0.875000 of Item 5 with weight 40.000000 has been added to the knapsack contributing a profit of 140.000000


Total profit made = 270.00
 */
/*
Enter number of items :4
Enter weight & value
24 120
20 120
40 280
10 100
Enter knapsack capacity :60

Entered values are :

ITEMS   WT      VAL     BENEFIT
Item1   24      120     5.00
Item2   20      120     6.00
Item3   40      280     7.00
Item4   10      100     10.00


After sorting all the items according to pi/wi :

ITEMS   WT      VAL     BENEFIT
Item4   10      100     10.00
Item3   40      280     7.00
Item2   20      120     6.00
Item1   24      120     5.00

Item 4 with weight 10.000000 has been added to the knapsack contributing a profit of 100.000000
Item 3 with weight 40.000000 has been added to the knapsack contributing a profit of 280.000000
0.500000 of Item 2 with weight 20.000000 has been added to the knapsack contributing a profit of 60.000000


Total profit made = 440.00
 */