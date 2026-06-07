#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
 int t;cin>>t;while(t--){
    ll n;cin>>n;
    bool isTrue=false;
    ll sum=0;
    map<ll,bool>mp;
    mp[0]=true;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        if(i%2)x*=-1;
        sum+=x;
        if(mp[sum]==true){
            isTrue=true;
        }

        mp[sum]=true;
    }
    if(isTrue)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

 }

return 0;
}
