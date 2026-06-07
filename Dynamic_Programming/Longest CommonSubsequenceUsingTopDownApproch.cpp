#include<bits/stdc++.h>
using namespace std;
string s;
int LCS(string x,string y,int n,int m){
 int dp[n+1][m+1];
 for(int i=0;i<=n;i++)dp[i][0]=0;
 for(int j=1;j<=m;j++)dp[0][j]=0;

for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(x[i-1]==y[j-1])dp[i][j]=dp[i-1][j-1]+1;
        else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    }
}

/**Extra code for understanding**/
for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
        cout<<dp[i][j]<<" ";
    }
    cout<<endl;
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
return dp[n][m];
}
int main(){
string x,y;
x="AGGTAB";
y="GXTXAYB";
int ans=LCS(x,y,x.size(),y.size());
cout<<ans<<endl;
reverse(s.begin(),s.end());
cout<<s<<endl;
return 0;
}
