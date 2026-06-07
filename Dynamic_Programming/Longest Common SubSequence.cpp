#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int LCS(string &s,string &ss,int n,int m){ /**This & simbol time limit more less than such that 2600ms to 33 ms wow  **/
 if(n==0 or m==0)return 0;
 if(dp[n][m]!=-1)return dp[n][m];
 if(s[n-1]==ss[m-1])return dp[n][m]= 1+LCS(s,ss,n-1,m-1);
 else return dp[n][m]= max(LCS(s,ss,n-1,m),LCS(s,ss,n,m-1));

}
int main(){
    memset(dp,-1,sizeof(dp));
string s,s1;
cin>>s>>s1;
int ans=LCS(s,s1,s.size(),s1.size());
cout<<ans<<endl;

return 0;
}
