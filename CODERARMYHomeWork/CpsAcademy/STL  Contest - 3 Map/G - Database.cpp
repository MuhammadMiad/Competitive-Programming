#include<bits/stdc++.h>
using namespace std;
int main(){
    int l=1;
int t;cin>>t;while(t--){
  int k,n;
  cin>>k>>n;
  map<int ,map<int,int>>mp;
  int x,y;
  for(int i=0;i<n;i++){
        cin>>x>>y;
        mp[x][y]++;
  }
  int flag=0;
  for(auto &it:mp){
    for(auto &ch:it.second){
        if(ch.second>1){
            flag=1;
            break;
        }
    }
    if(flag)break;
  }

  if(flag){
    cout<<"Scenario #"<<l++<<": "<<"imossible"<<endl;
  }
  else{
   cout<<"Scenario #"<<l++<<": "<<"possible"<<endl;
  }

}


return 0;
}
