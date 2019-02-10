#include <iostream>
using namespace std;
int main() {
    cout<<"Bubble sort yo\n";
    int n, a[100];
    cout<<"Enter the count \n";
    cin>>n;
    cout<<"Enter the numbers \n";
    for(int i = 0;i<n;i++)
        cin>>a[i];
    for(int i = 0;i<n;i++)
        for(int j=0;j<n;j++)
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
    cout<<"ascending order yo \n";
    for(int i =0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}