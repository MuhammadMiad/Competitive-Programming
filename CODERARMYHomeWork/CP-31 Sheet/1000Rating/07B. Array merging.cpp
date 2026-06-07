#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;cin>>t;while(t--){
     ll n;cin>>n;
     vector<ll>arr(n),brr(n);
     unordered_map<ll,pair<ll,ll>>mp;
     for(int i=0;i<n;i++){
            cin>>arr[i];
           // mp[arr[i]]={0,0};
     }
     for(int i=0;i<n;i++){
            cin>>brr[i];
           //mp[brr[i]]={0,0};
     }
     ll cnt=1;
     for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1] and i+1<n)cnt++;
        else cnt=1;
        mp[arr[i]].first=max(mp[arr[i]].first,cnt);
     }
     cnt=1;
     for(int i=0;i<n;i++){
        if(brr[i]==brr[i+1] and i+1<n)cnt++;
        else cnt=1;
        mp[brr[i]].second=max(mp[brr[i]].second,cnt);
     }
    ll mx=0;
    for(auto &it:mp){
        mx=max(mx,(it.second.first+it.second.second));
    }
    cout<<mx<<endl;

    }

return 0;
}
