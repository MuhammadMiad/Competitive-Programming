#include<bits/stdc++.h>
using namespace std;
string LCS(string x,string y,vector<vector<int>>&dp){

int length=0;
int row;
int col;
for(int i=0;i<=x.size();i++)dp[i][0]=0;
for(int j=0;j<=y.size();j++)dp[0][j]=0;
for(int i=1;i<=x.size();i++){
    for(int j=1;j<=y.size();j++){
            if(x[i-1]==y[j-1]){
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
int len=length;
string s="";
for(int i=0;i<len;i++){
    s+='$';
}
int index=len-1;
while(dp[row][col]!=0){
    s[index]=x[row-1];
    index--;
    row--;
    col--;
}

for(int i=0;i<=x.size();i++){
    for(int j=0;j<=y.size();j++){
        cout<<dp[i][j]<<" ";
    }
    cout<<endl;
}

return s;
}
int main(){
string s1="abcd";
string s2="abzd";
vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1));
string ans=LCS(s1,s2,dp);
cout<<ans<<endl;
return 0;
}

