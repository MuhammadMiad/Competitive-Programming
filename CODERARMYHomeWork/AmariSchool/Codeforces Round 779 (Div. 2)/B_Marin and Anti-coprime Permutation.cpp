#include<bits/stdc++.h>
using namespace std;
#define mod 998244353
typedef long long  ll;

ll fact(ll a){
   if(a==1)return 1;
   return (a*fact(a-1)%mod)%mod;


}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2){
            cout<<0<<endl;
            continue;
        }

        ll a=fact(n/2);

        ll ans= (a*a)%mod;
        cout<<ans<<endl;
    }


return 0;
}
