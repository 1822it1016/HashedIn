#include <bits/stdc++.h>
using namespace std;
void insertion(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp= arr[i];
        int j=i-1;
        while(arr[j]>temp and j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
void selection(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx=j;   
            }
            swap(arr[min_idx],arr[i]);
        }
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
    selection(arr,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
