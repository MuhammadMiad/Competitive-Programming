#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   map<int,int>mp;
   for(int i=0;i<n;i++){
    int x;
    cin>>x;
    mp[x]++;
   }
   int cnt=0;
   for(auto &ch:mp){
    if(ch.first>ch.second){
       cnt+=ch.second;
    }
    else if(ch.first<ch.second){
        cnt+=ch.second-ch.fi
    }
   }
   cout<<cnt<<endl;


return 0;
}
