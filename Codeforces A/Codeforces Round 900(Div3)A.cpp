#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
vector<int>v(n);
for(int i=0;i<n;i++){
cin>>v[i];
}

unordered_map<int,int>mp;
for(int i=0;i<n;i++)
mp[v[i]]++;


if(mp.count(k))cout<<"YES\n";
else cout<<"NO\n";
}

return 0;
}

