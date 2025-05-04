#include<bits/stdc++.h>
using namespace std;
int part(int a[], int low, int high)
{
    int pivot = a[high];
    int i = low, j = high - 1;
    while (i <= j)
    {
        while (a[i] < pivot && i < high)
            i++;
        while (a[j] > pivot && j >= low)
            j--;
        if (i <= j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    int temp=a[j+1];
    a[j+1]=pivot;
    a[high]=temp;
    return j+1;
}
void quicksort(int a[],int low,int high)
{
    if(low<high)
    {
        int p1=part(a,low,high);
        quicksort(a,low,p1-1);
        quicksort(a,p1+1,high);
    }
}
int main()
{
    int a[10]={5,2,8,1,9,3,6,7,4,10};
    quicksort(a,0,9);
    for(int i=0;i<=9;i++)
    {
        cout<<a[i]<<" ";
        }
}
