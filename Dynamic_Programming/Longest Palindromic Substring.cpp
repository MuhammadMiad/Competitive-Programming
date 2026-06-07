#include<bits/stdc++.h>
using namespace std;
string ss="";
int LCS(string x,int n){
    string y=x;
    reverse(y.begin(),y.end());
int dp[n+1][n+1];
for(int i=0;i<=n;i++){
    dp[i][0]=0;
    dp[0][i]=0;
}
int length=0;
int row;
int col;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
            if(i==0 or j==0){
                dp[i][j]=0;
            }
        else if(x[i-1]==y[j-1]){
            dp[i][j]=dp[i-1][j-1]+1;
             if(length<dp[i][j]){
                length=dp[i][j];
                col=j;
                row=i;
             }
        }
        else dp[i][j]=0;
    }
}
while(dp[row][col]!=0){
    ss+=x[row-1];
    row--;
    col--;
}

for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        cout<<dp[i][j]<<" ";
    }
    cout<<endl;
}

return length;
}
int main(){
string s;
cin>>s;
int ans=LCS(s,s.size());
cout<<ans<<endl;
cout<<ss<<endl;
return 0;
}

