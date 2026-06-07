#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;cin>>n;
    map<ll,ll>mp;
    while(n--){
        ll l,r;
        cin>>l>>r;
        mp[l]++;
        mp[r+1]--;
    }
    for(auto it=mp.begin();it!=mp.end();it++){
     if(it==mp.begin())continue;
     it->second+=prev(it)->second;
    }

    ll mx=1;
    for(auto &p:mp)mx=max(mx,p.second);
    cout<<mx<<endl;



return 0;
}
