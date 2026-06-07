#include<bits/stdc++.h>
using namespace std;
int CoinChangeMaxWay(int coin[],int n,int sum){
 int dp[n+1][sum+1];
 for(int i=1;i<=n;i++)dp[i][0]=1;
 for(int i=0;i<=sum;i++)dp[0][i]=0;

 for(int i=1;i<=n;i++){
    for(int j=1;j<=sum;j++){
        if(coin[i-1]>j)dp[i][j]=dp[i-1][j];
        else dp[i][j]=dp[i][j-coin[i-1]]+dp[i-1][j];
    }
 }
  /**Write to be better understand**/
 for(int i=0;i<=n;i++){
    for(int j=0;j<=sum;j++){
        cout<<dp[i][j]<< "  ";

    }
    cout<<endl;
 }
 return dp[n][sum];
}
int main(){
int coins[]={1,2,3};
int sum=5;
int n=sizeof(coins)/sizeof(coins[0]);
int ans=CoinChangeMaxWay(coins,n,sum);
cout<<"Maximum Number of Ways:"<<ans<<endl;
return 0;
}
