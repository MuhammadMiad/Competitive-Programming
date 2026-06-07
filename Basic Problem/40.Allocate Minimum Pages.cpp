#include<bits/stdc++.h>
using namespace std;
long long findPages( int arr[],int n, int m)
{

    if(m>n)return -1;
    long long left=0,right=0,ans;
    for(int i=0; i<n; i++)
    {
        if(left<arr[i])left=arr[i];
        right+=arr[i];
    }

    while(left<=right)
    {
        int mid=left+(right-left)/2;
        int count=1,pages=0;
        for(int i=0; i<n; i++)
        {
            pages+=arr[i];
            if(pages>mid)
            {
                count++;
                pages=arr[i];
            }
        }

        if(count<=m)
        {
            ans=mid;
            right=mid-1;
        }
        else left=mid+1;
    }
    return ans;
}
int main()
{
    int arr[]= {12, 34, 67, 90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int man=2;
    cout<<"Minimum pages: "<<findPages(arr,n,man)<<endl;
    return 0;
}
