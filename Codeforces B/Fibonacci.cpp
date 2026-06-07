#include<bits/stdc++.h>
using namespace std;
int dp[1000];
int fibo(int n){
if(n==0)return 0;
if(n==1)return 1;
if(dp[n]!=-1)return dp[n];
else return dp[n]= fibo(n-1)+fibo(n-2);
}
int main(){
memset(dp,-1,sizeof(dp));
int t;
cin>>t;
while(t--){
int n;
cin>>n;
cout<<fibo(n)<<endl;
    }
return 0;
}
