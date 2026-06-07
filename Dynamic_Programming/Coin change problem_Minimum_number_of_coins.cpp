#include<bits/stdc++.h>
using namespace std;
int CoinChangeMinNum(int coin[],int n,int sum){
int dp[n+1][sum+1];
for(int i=1;i<=n;i++)dp[i][0]=0;
for(int i=0;i<=sum;i++)dp[0][i]=coin[max_element(coin,coin+n)-coin]-1;

for(int i=1;i<=n;i++){
    for(int j=1;j<=sum;j++){
        if(coin[i-1]>j)dp[i][j]=dp[i][j-1];
        else dp[i][j]=min(dp[i-1][j],dp[i][j-coin[i-1]]+1);
    }
}
for(int i=0;i<=n;i++){
    for(int j=0;j<=sum;j++){
        cout<<dp[i][j]<<" ";
    }
    cout<<endl;
}
return dp[n][sum];

}
int main(){
int coins[]={3,5,6,2,1,8};
int n=sizeof(coins)/sizeof(coins[0]);
int sum=9;
int ans=CoinChangeMinNum(coins,n,sum);
cout<<"Minimum Number of Coins: "<<ans<<endl;
return 0;
}
