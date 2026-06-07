#include<bits/stdc++.h>
using namespace std;
int CountSubsetSumDiff(int arr[],int n,int diff){
    int sum=0;
    for(int i=0;i<n;i++)sum+=arr[i];
    if(diff>sum)return 0;
    if((sum+diff)%2!=0)return 0;
    int s1=(sum+diff)/2;

    int dp[n+1][s1+1];
    for(int i=0;i<=n;i++)dp[i][0]=1;
    for(int j=1;j<=s1;j++)dp[0][j]=0;

    for(int i=1;i<=n;i++){
        for(int j=0;j<=s1;j++){
            if(arr[i-1]>j) dp[i][j]=dp[i-1][j];
            else dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
        }
    }
    return dp[n][s1];

}
int main(){
    int n,diff;
    cin>>n>>diff;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int dif=CountSubsetSumDiff(arr,n,diff);
    cout<<dif<<endl;
return 0;
}
