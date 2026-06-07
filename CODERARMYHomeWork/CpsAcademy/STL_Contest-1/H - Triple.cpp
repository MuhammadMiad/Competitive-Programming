#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        int store=0;
        for(auto it:mp){
            if(it.second>=3){
             store=it.first;
            }
        }
        if(store)cout<<store<<endl;
        else cout<<-1<<endl;
    }


return 0;
}
