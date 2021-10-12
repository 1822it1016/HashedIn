#include <iostream>
using namespace std;
int binary(int arr[],int l,int h,int k)
{
    int mid=(l+h)/2;
    if(arr[mid]<k)
        return binary(arr,mid+1,h,k);
    else if(arr[mid]>k)
        return binary(arr,l,mid-1,k);
    else
        return mid;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    cout<<binary(arr,0,n-1,k);
}
