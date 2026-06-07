#include<bits/stdc++.h>
using namespace std;
int dp[102][10002];
bool subsetSum(int arr[],int index,int n,int target){
  if(target==0)return 1;
  if(index==n||target<0)return 0;
  if(dp[index][target]!=-1)return dp[index][target];

  return dp[index][target]=subsetSum(arr,index+1,n,target)||subsetSum(arr,index+1,n,target-arr[index]);
}
int main(){
    int arr[]={3,6,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=12;
    memset(dp,-1,sizeof(dp));
    if(subsetSum(arr,0,n,target))
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

return 0;
}
