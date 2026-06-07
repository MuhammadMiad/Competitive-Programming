#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
       int n;cin>>n;
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++){
       int x;cin>>x;
       mp[x]++;
       }
       if(n==1){
        cout<<0<<endl;continue;
       }
       int mx=0;
       for(auto &p:mp){
        mx=max(mx,p.second);
       }
       if(mx>mp.size()){
        cout<<mp.size()<<endl;
       }
       else if(mx<mp.size())cout<<mx<<endl;
       else cout<<mx-1<<endl;


    }


return 0;
}
