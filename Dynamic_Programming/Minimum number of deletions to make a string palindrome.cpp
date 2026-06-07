#include<bits/stdc++.h>
using namespace std;
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
return dp[n][n];

}
int main(){
string s;
cin>>s;
string s1=s;
reverse(s1.begin(),s1.end());
int ans=LCS(s,s1,s.size());
cout<<"Minimum number of deletions to make a string palindrome:"<<s.size()-ans<<endl;
return 0;
}
