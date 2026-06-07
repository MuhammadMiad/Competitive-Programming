#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int WaysToSum(vector<int>&arr,int n,int sum,vector<int>&dp){
 if(sum==0)return 1;
 if(sum<0)return 0;
 if(dp[sum]!=-1)return dp[sum];
int ans=0;
for(int i=0;i<n;i++){
     ans=(ans+WaysToSum(arr,n,sum-arr[i],dp))%mod;
}
return dp[ans]=ans%mod;

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum,ans;
    cin>>sum;
    vector<int>dp(sum+2,-1);
    ans=WaysToSum(arr,n,sum,dp);
    cout<<"Total Way of Sum "<<sum<<" : "<<ans<<endl;

return 0;
}
