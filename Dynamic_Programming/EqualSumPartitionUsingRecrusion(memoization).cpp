#include<bits/stdc++.h>
using namespace std;
int dp[1002][10007];
int EqualSumPartition(int arr[],int n,int sum){
    if(sum==0)return 1;
    if(sum!=0&&n==0)return 0;
    if(dp[n][sum]!=-1)return dp[n][sum];
    if(arr[n-1]>sum){
        return dp[n][sum]=EqualSumPartition(arr,n-1,sum);
    }
    else return dp[n][sum]=EqualSumPartition(arr,n-1,sum-arr[n-1])||EqualSumPartition(arr,n-1,sum);
}

int main(){
    memset(dp,-1,sizeof(dp));
int n;
cin>>n;
int arr[n];
int sum=0,ans;
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
}
if(sum%2==1)cout<<"False"<<endl;
else{
    ans=EqualSumPartition(arr,n,sum/2);
}
if(ans==1)cout<<"True"<<endl;
else cout<<"False"<<endl;




return 0;
}
