#include<bits/stdc++.h>
using namespace std;
string ss;
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

for(int i=0;i<=m;i++){
    for(int j=0;j<=n;j++){
        cout<<dp[i][j]<<" ";
    }
    cout<<endl;
}
cout<<endl;
int i=m;
int j=n;
while(i>0&&j>0){
    if(x[i-1]==y[j-1]){
        ss+=x[i-1];
        i--;
        j--;
    }
    else {
        if(dp[i-1][j]>dp[i][j-1]){
        ss+=x[i-1];
        i--;
    }
    else{
        ss+=y[j-1];
        j--;
    }
    }

}
while(i>0){
    ss+=x[i-1];
    i--;
}
while(j>0){
    ss+=y[j-1];
    j--;
}
return dp[m][n];

}
int main(){
string s,s1;
cin>>s>>s1;
int ans=SCS(s,s1,s.size(),s1.size());
cout<<"Shortest Common Super sequence :"<<s.size()+s1.size()-ans<<endl;
reverse(ss.begin(),ss.end());
cout<<ss<<endl;
return 0;/**Attention Here,total both string length - longest common subsequence length **/
}

