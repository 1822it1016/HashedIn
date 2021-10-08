#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h)
{
    int pivot=arr[l];
    int i=l;
    int j=h;
    while(i<j )
    {
        while(arr[i]<=pivot)
        i++;
        while(arr[j] > pivot)
        j--;
        if(i<j)
        swap(arr[i],arr[j]);
    }
    swap(arr[l],arr[j]);
    return j;
}
void quick_sort(int arr[],int l,int h)
{
    if(l<h)
    {
        int p=partition(arr,l,h);
        quick_sort(arr,l,p-1);
        quick_sort(arr,p+1,h);
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quick_sort(arr,0,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
