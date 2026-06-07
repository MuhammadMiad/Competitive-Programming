#include<bits/stdc++.h>
using namespace std;
int DisSub(string &s,string &t,vector<vector<double>>&dp){
        int n=s.size();
        int m=t.size();
        for(int i=0;i<=n;i++)dp[i][0]=1;
        for(int j=1;j<=m;j++)dp[0][j]=0;

          for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){

            if(s[i-1]==t[j-1]){
            dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }

        }

        return (int)dp[n][m];

    }

int main(){
string s="babgbag";
string t="bag";
vector<vector<double>>dp(s.size()+1,vector<double>(t.size()+1));
 int ans=DisSub(s,t,dp);
cout<<"Total subsequence of "<<t<<" : "<<ans<<endl;

for(int i=0;i<=s.size();i++){
    for(int j=0;j<=t.size();j++){
        cout<<dp[i][j]<<" ";
    }
    cout<<endl;
}


return 0;
}
