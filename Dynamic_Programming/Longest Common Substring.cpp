#include<bits/stdc++.h>
using namespace std;
string ss;
int LCS(string x,string y,int m,int n){
int dp[m+1][n+1];
int result=0;
for(int i=0;i<=m;i++)dp[i][0]=0;
for(int i=1;i<=n;i++)dp[0][i]=0;

int length=0;
int row;
int col;
for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        if(x[i-1]==y[j-1]){
            dp[i][j]=dp[i-1][j-1]+1;
            if(length<dp[i][j]){
                length=dp[i][j];
                row=i;
                col=j;
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

/**Extra code for understanding**/
for(int i=0;i<=m;i++){
    for(int j=0;j<=n;j++){
        cout<<dp[i][j]<<" ";
    }
    cout<<endl;
}
return result;
}
int main(){
string s,s1;
cin>>s>>s1;
int ans=LCS(s,s1,s.size(),s1.size());
cout<<ans<<endl;
reverse(ss.begin(),ss.end());
cout<<ss<<endl;
return 0;
}
