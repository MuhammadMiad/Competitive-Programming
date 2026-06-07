#include<bits/stdc++.h>
using namespace std;
 int  PerfectSum(vector<int>&arr,int index,int n,int target,vector<vector<int>>dp){
  if(target<0)return 0;
  if(index==n)return target==0;
  if(dp[index][target]!=-1)return dp[index][target];
  return dp[index][target]=PerfectSum(arr,index+1,n,target,dp)+PerfectSum(arr,index+1,n,target-arr[index],dp);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int target;
    cin>>target;
    int index=0;
    vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
    cout<<PerfectSum(arr,index,n,target,dp)<<endl;


return 0;
}
