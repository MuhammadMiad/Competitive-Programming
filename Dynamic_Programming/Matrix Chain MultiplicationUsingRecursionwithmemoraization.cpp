#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int MatrixChainMulti(int arr[],int i,int j){
if(i>=j)return 0;
if(dp[i][j]!=-1)return dp[i][j];
int temp;
int mn=INT_MAX;
for(int k=i;k<j;k++){
    temp=MatrixChainMulti(arr,i,k)+MatrixChainMulti(arr,k+1,j)+(arr[i-1]*arr[k]*arr[j]);
    mn=min(mn,temp);
}
return dp[i][j]=mn;

}
int main(){
    int arr[]={30,35,15,5,10,20,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    memset(dp,-1,sizeof(dp));
    int ans=MatrixChainMulti(arr,1,n-1);
    cout<<"Minimum number of "<<ans<<endl;

return 0;
}
