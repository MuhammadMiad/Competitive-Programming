#include<bits/stdc++.h>
using namespace std;
int unboundedKnapsack(int wt[],int val[],int n,int w){
int dp[n+1][w+1];
for(int i=0;i<=n;i++)dp[i][0]=0;
for(int i=0;i<=w;i++)dp[0][i]=0;
for(int i=1;i<=n;i++){
    for(int j=1;j<=w;j++){
        if(wt[i-1]>j)dp[i][j]=dp[i-1][j];
        else dp[i][j]=max(val[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
    }
}
/**Write be better understand**/
for(int i=0;i<=n;i++){
    for(int j=0;j<=w;j++){
        cout<<dp[i][j]<<"  ";
    }
    cout<<endl;
}
return dp[n][w];

}
int main(){
    int W = 100;
    int val[] = { 10, 30, 20 };
    int wt[] = { 5, 10, 15 };
    int n = sizeof(val) / sizeof(val[0]);
    int ans=unboundedKnapsack(wt,val, n,W);

    cout <<"Store Maximum amount in W :"<<ans<<endl;
    return 0;

return 0;
}
