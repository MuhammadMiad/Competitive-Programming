#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while(t--){
    string str;
    cin>>str;
    map<char,int>mp;
    for(int i=0;i<str.size();i++){
        mp[str[i]]++;
    }
    if(mp.size()==1)cout<<"NO"<<endl;
    else{
        if(mp.size()==2){
             int flag=0;
            for(auto it:mp)if(it.second==1)flag=1;

        if(flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        }
        else cout<<"YES"<<endl;
    }

  }

return 0;
}
