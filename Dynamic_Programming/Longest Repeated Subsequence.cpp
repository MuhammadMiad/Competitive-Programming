#include<bits/stdc++.h>
using namespace std;
unordered_set<char>st;
map<char,int>mp;
vector<char>v;
int SCS(string x,string y,int n,int k){
    for(int i=0;i<n;i++){
        mp[x[i]]++;
    }
    for(auto it:mp){
        if(it.second>=k)v.push_back(it.first);
    }
int dp[n+1][n+1];
for(int i=0;i<=n;i++){
     dp[i][0]=0;
     dp[0][i]=0;
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(x[i-1]==y[j-1]&&i!=j)dp[i][j]=dp[i-1][j-1]+1;
        else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    }
}

//for(int i=0;i<=n;i++){
//    for(int j=0;j<=n;j++){
//        cout<<dp[i][j]<<" ";
//    }
//    cout<<endl;
//}
//cout<<endl;
int i=n;
int j=n;
while(i>0&&j>0){
    if(x[i-1]==y[j-1]&&i!=j){
        for(int m=0;m<v.size();m++){
              if(x[i-1]==v[m]){
                 st.insert(x[i-1]);
              }
        }

        i--;
        j--;
    }
    else{
        if(dp[i][j-1]>dp[i-1][j])j--;
        else i--;
    }
}
return dp[n][n];

}
int main(){
string s,s1;
cin>>s;
int k;
cin>>k;
s1=s;
int ans=SCS(s,s1,s.size(),k);
cout<<"Longest Repeated Subsequence :"<<ans<<endl;
for(auto it:st)cout<<it;
cout<<endl;
return 0;
}


