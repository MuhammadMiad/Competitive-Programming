#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[],int left,int mid,int right)
{
    vector<int>result(right-left+1);
    int  first=left,last=mid+1,index=0;
    while(first<=mid&&last<=right)
    {
        if(arr[first]<=arr[last])
        {
            result[index]=arr[first];
            first++;
            index++;
        }
        else
        {
            result[index]=arr[last];
            last++;
            index++;
        }
    }

    while(first<=mid)
    {
        result[index]=arr[first];
        first++;
        index++;
    }
    while(last<=right)
    {
        result[index]=arr[last];
        last++;
        index++;
    }
    index=0;
    while(left<=right)
    {
        arr[left]=result[index];
        left++,index++;
    }
}
void MergeSort(int arr[],int left,int right)
{
    if(left==right)return;

    int mid=left+(right-left)/2;
    MergeSort(arr,left,mid);
    MergeSort(arr,mid+1,right);
    Merge(arr,left,mid,right);
}
int main()
{
    int arr[]= {6,5,12,10,9,1};
    int n=sizeof(arr)/sizeof(arr[0]);

    MergeSort(arr,0,n-1);

    for(int i=0; i<n; i++)cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}
