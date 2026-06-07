#include<bits/stdc++.h>
using namespace std;
int dp[10002][10002];
int TergetSum(vector<int>arr,int i,int s,int target,int totalsum){
  if(s==target&&i==arr.size()) return 1;
  if(i>=arr.size())return 0;
   if(dp[i][s+totalsum]!=-1)return dp[i][totalsum+s];
  return dp[i][s+totalsum]=TergetSum(arr, i + 1, s + arr[i], target,totalsum)+ TergetSum(arr, i + 1, s - arr[i], target,totalsum);
}

int main(){
memset(dp,-1,sizeof(dp));
int n,totalsum=0;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++)cin>>arr[i];
for(int i=0;i<n;i++)totalsum+=arr[i];
int target;
cin>>target;

int cnt=TergetSum(arr,0,0,target,totalsum);
cout<<cnt<<endl;

return 0;
}
