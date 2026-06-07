#include<bits/stdc++.h>
using namespace std;
int dp[100000+7];
int minCost(int index,int n,vector<int>&arr){
 if(index==n-1)return 0;
 if(dp[index]!=-1)return dp[index];
 int totalcost1=INT_MAX,totalcost2=INT_MAX;
 if(index+1<n)
 totalcost1=abs(arr[index+1]-arr[index])+minCost(index+1,n,arr);
 if(index+2<n)
 totalcost2=abs(arr[index+2]-arr[index])+minCost(index+2,n,arr);

 return  dp[index]=min(totalcost1,totalcost2);
}
int main(){
 memset(dp,-1,sizeof(dp));
 int n;cin>>n;
 vector<int>arr(n);
 for(int i=0;i<n;i++)cin>>arr[i];

 cout<<minCost(0,n,arr)<<endl;

return 0;
}
