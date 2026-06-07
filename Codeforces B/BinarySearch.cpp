#include<bits/stdc++.h>
using namespace std;
void  BinarySearch(int arr[],int n,int x)
{
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(arr[mid]==x)
        {
            cout<<"Found"<<endl;
            cout<<"The index of "<<x<<" is:"<<mid<<endl;
            return;
        }
        else if(arr[mid]>x) r=mid-1;
        else l=mid+1;

    }
    cout<<x<<" is not found"<<endl;


}
int main()
{
    int n,x;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    cin>>x;
    BinarySearch(arr,n,x);


    return 0;
}
