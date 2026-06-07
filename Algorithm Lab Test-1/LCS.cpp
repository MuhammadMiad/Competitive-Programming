#include<bits/stdc++.h>
using namespace std;
void LCS(string str1,string str2){
 int n=str1.size();
 int m=str2.size();
 int dp[n+1][m+1];

 for(int i=0;i<=n;i++)dp[0][i]=0;
 for(int i=0;i<=m;i++)dp[i][0]=0;

 for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(str1[i-1]==str2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
        else {
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
 }
 for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
        cout<<dp[i][j]<<" ";
    }
    cout<<endl;
 }

int len=dp[n][m];
string result="";
for(int i=0;i<len;i++){
    result+='#';
}
int index=len-1;
while(n>0&&m>0){
    if(str1[n-1]==str2[m-1]){
       result[index]=str1[n-1];
       index--;
       n--;
       m--;

    }
    else if(dp[n][m-1]>dp[n-1][m])m--;
    else n--;
}
cout<<result<<endl;
}
int main(){
string str1="ABCBDAB";
string str2="BDCABA";

 LCS(str1,str2);

return 0;
}
