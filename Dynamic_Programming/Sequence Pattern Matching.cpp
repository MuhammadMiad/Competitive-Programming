#include<bits/stdc++.h>
using namespace std;
string s;
void LCS(string x,string y,int n,int m){
 int dp[n+1][m+1];
 for(int i=0;i<=n;i++)dp[i][0]=0;
 for(int j=1;j<=m;j++)dp[0][j]=0;

for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(x[i-1]==y[j-1])dp[i][j]=dp[i-1][j-1]+1;
        else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    }
}
int i=n;
int j=m;
while(i>0&&j>0){
    if(x[i-1]==y[j-1]){
        s+=x[i-1];
        i--;
        j--;
    }
    else{
        if(dp[i-1][j]>dp[i][j-1])i--;
        else j--;
    }
}
}
int main(){
string x,y;
cin>>x>>y;
LCS(x,y,x.size(),y.size());
reverse(s.begin(),s.end());
if(x==s)cout<<"YES,Sequence Pattern Matching"<<endl;
else cout<<"NO,Sequence pattern Not Matching"<<endl;
return 0;
}



