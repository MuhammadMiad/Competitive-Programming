#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000][2];
int ParenthesisCount(string s,int i,int j,int isTrue){
 if(i>j)return false;
 if(i==j){
    if(isTrue==1)return s[i]=='T';
    else return s[i]=='F';
 }
  int ans=0;
  for(int k=i+1;k<j;k+=2){
    int leftT,rightT,leftF,rightF;

    if(dp[i][k-1][1]==-1)leftT=ParenthesisCount(s,i,k-1,1);
    else leftT=dp[i][k-1][1];

    if(dp[i][k-1][0]==-1)leftF=ParenthesisCount(s,i,k-1,0);
    else leftF=dp[i][k-1][0];

    if(dp[k+1][j][1]==-1)rightT=ParenthesisCount(s,k+1,j,1);
    else rightT=dp[k+1][j][1];

    if(dp[k+1][j][0]==-1) rightF=ParenthesisCount(s,k+1,j,0);
    else rightF=dp[k+1][j][0];

    if(s[k]=='&'){
        if(isTrue==1)ans+=leftT*rightT;
        else ans+=leftF*rightF+leftF*rightT+leftT*rightF;
    }
    else if(s[k]=='|'){
        if(isTrue==1)ans+=leftT*rightT+leftT*rightF+leftF*rightT;
        else ans+=leftF*rightF;
    }
    else if(s[k]=='^'){
        if(isTrue==1)ans+=leftT*rightF+leftF*rightT;
        else ans+=leftT*rightT+leftF*rightF;
    }

  }
  return dp[i][j][isTrue]=ans;

}
int main(){
string symbols;
string operations;
cin>>symbols>>operations;
string s;
int j=0;
for(int i=0;i<symbols.size();i++){
    s.push_back(symbols[i]);
    if(j<operations.size())s.push_back(operations[i]);
    j++;
}
int n=s.size();
memset(dp,-1,sizeof(dp));
cout<<"True boolean Parenthesization: "<<ParenthesisCount(s,0,n-1,1)<<endl;

return 0;
}
