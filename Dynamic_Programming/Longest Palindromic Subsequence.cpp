#include<bits/stdc++.h>
using namespace std;
string s;
int LCS(string x,string y,int n){
 int dp[n+1][n+1];
 for(int i=0;i<=n;i++){
    dp[i][0]=0;
    dp[0][i]=0;
 }
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(x[i-1]==y[j-1])dp[i][j]=dp[i-1][j-1]+1;
        else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    }
}
int i=n;
int j=n;
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
return dp[n][n];
}
int main(){
string x;
cin>>x;
string y=x; /**Attention please,Important point**/
reverse(y.begin(),y.end());
int ans=LCS(x,y,x.size());
cout<<ans<<endl;
cout<<s<<endl;
return 0;
}

