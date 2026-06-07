#include<bits/stdc++.h>
using namespace std;
void  Reverse(int arr[],int f,int l)
{
    if(f>l)return;
    int temp=arr[f];
    arr[f]=arr[l];
    arr[l]=temp;
    Reverse(arr, f+1,l-1);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    cout<<"Before  Reverse Array:"<<endl;
    for(int i=0; i<n; i++)cout<<arr[i]<< " ";
    cout<<endl;
    Reverse(arr,0,n-1);
    for(int i=0;i<n;i++)cout<<arr[i]<< " ";
    cout<<endl;

    return 0;
}
