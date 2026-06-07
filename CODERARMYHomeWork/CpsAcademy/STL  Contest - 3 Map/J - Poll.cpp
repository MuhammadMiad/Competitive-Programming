#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  int mx=0;
  string x;
  map<string,int>mp;
  for(int i=0;i<n;i++){
    cin>>x;
    mp[x]++;
    mx=max(mx,mp[x]);

  }

  for(auto &p:mp){
    if(p.second==mx){
        cout<<p.first<<endl;
    }
  }



return 0;
}
