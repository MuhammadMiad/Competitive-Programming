#include<bits/stdc++.h>
using namespace std;
int dp[10000000];
int fibo(int n){
  if(n<=1)return n;
  if(dp[n]!=-1)return dp[n];
  return dp[n]=fibo(n-2)+fibo(n-1);
}
int main(){
memset(dp,-1,sizeof(dp));
int n;cin>>n;
 int ans =fibo(n);
 cout<<ans<<endl;

return 0;
}
