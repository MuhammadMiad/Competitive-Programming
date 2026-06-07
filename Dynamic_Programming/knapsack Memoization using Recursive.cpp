#include<bits/stdc++.h>
using namespace std;
int dp[102][1002];
int knapsack(int wt[],int val[],int w,int n){
if(w==0||n==0)return 0;
if(dp[n][w]!=-1)return dp[n][w];
if(wt[n-1]<=w){
    return dp[n][w]= max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
}
else
    return dp[n][w]=knapsack(wt,val,w,n-1);
}
int main(){
 memset(dp,-1,sizeof(dp));
 int profit[]={60,100,120};
 int weight[]={10,20,30};
 int W=50;
 int n=sizeof(weight)/sizeof(weight[0]);
 cout<<knapsack(weight,profit,W,n)<<endl;

return 0;
}
