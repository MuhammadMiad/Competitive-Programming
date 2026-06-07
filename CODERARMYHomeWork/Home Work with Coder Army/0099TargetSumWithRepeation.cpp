#include<bits/stdc++.h>
using namespace std;
int TargetSum(vector<int>&arr,int index,int n,int target,vector<vector<int>>dp){
 if(target==0)return 1;
 if(index==n || target<0)return 0;
 if(dp[index][target]!=-1)return dp[index][target];
 return dp[index][target]=TargetSum(arr,index+1,n,target,dp)+TargetSum(arr,index,n,target-arr[index],dp);

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int target;
    cin>>target;
    vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
    cout<<TargetSum(arr,0,n,target,dp)<<endl;

return 0;
}
