#include<bits/stdc++.h>
using namespace std;
int dp[202][20002];
int  isSubsetSum(int arr[],int n,int sum)
{
    if(sum==0)return 1;
    if(n<=0)return 0;
    if(dp[n][sum]!=-1)return dp[n][sum];
    if(sum<arr[n-1]){
        dp[n][sum]= isSubsetSum(arr,n-1,sum);
        return dp[n][sum];
    }

    else {
        dp[n][sum]=isSubsetSum(arr,n-1,sum-arr[n-1])||isSubsetSum(arr,n-1,sum);
        return dp[n][sum];
    }


}

int main()
{
    memset(dp,-1,sizeof(dp));
    int n,sum;
    cin>>n>>sum;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int  ans=isSubsetSum(arr,n,sum);
    if(ans==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
