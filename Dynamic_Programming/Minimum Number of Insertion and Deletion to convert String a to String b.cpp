#include<bits/stdc++.h>
using namespace std;
int SCS(string x,string y,int m,int n){
int dp[m+1][n+1];
for(int i=0;i<=m;i++)dp[i][0]=0;
for(int i=1;i<=n;i++)dp[0][i]=0;

for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){
        if(x[i-1]==y[j-1])dp[i][j]=dp[i-1][j-1]+1;
        else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    }
}
return dp[m][n];

}
   /**Attention Here,First string length - longest common subsequence length=Minimum number of deletion
   Second string length - longest common subsequence length=Minimum number of Insertion **/
int main(){
string s,s1;
cin>>s>>s1;
int ans=SCS(s,s1,s.size(),s1.size());
cout<<"Minimum Number of  Deletion :"<<s.size()-ans<<endl;
cout<<"Minimum Number of  Insertion :"<<s1.size()-ans<<endl;
return 0;
}

