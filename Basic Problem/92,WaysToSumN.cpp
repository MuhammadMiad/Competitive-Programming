#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int WaysToSum(int arr[],int m,int N,vector<int>&dp){
 if(N==0)return 1;
 if(N<0)return  0;
 if(dp[N]!=-1)return dp[N];
 int ans=0;
 for(int i=0;i<m;i++){
    ans=(ans+WaysToSum(arr,m,N-arr[i],dp))%mod;
 }
 return dp[N]=ans%mod;


}
int main(){
    int arr[]={1,5,6};
    int m=sizeof(arr)/sizeof(arr[0]);

    int N=7;
    vector<int>dp(N+1,-1);
    int ans =WaysToSum(arr,m,N,dp);
    cout<<ans<<endl;

return 0;
}
