#include<bits/stdc++.h>
using namespace std;
int dp[102][10002];
int  countSubsum(int arr[],int index,int n,int target)
{
    if(index==n)return target==0;

    if(dp[index][target]!=-1)return dp[index][target];

    return dp[index][target]= countSubsum(arr,index+1,n,target)+countSubsum(arr,index+1,n,target-arr[index]);
}
int main()
{
    int arr[]={2,5,6,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=8;
    memset(dp,-1,sizeof(dp));
    int ans=countSubsum(arr,0,n,target);
    cout<<ans<<endl;
    return 0;
}
