#include<bits/stdc++.h>
using namespace std;
#define mod 100000007
typedef long long int ll;
int fact(ll n){
    ll fac=1;
for(ll i=1;i<=n;i++){
    fac=(fac*i)%mod;
}
return fac%mod;
//if(n==0||n==1) return 1;
//return ((n%mod)*fact(n-1))%mod;
}


ll  Power(ll Base, ll p){
  ll res=1;
  while(p){
    if(p%2==1){
        res=(res*Base)%mod;
        p--;
    }
    else{
        Base=(Base*Base)%mod;
        p/=2;
    }
  }
  return res%mod;

}
ll  nCr(ll ans,ll r,ll k ){
 ll ans1=Power(r,mod-2);
 ll ans2= Power(k,mod-2);
 ans=(ans*ans1)%mod;
 ans =(ans*ans2)%mod;
 return ans%mod;

}
int main(){
ll n,r;
cin>>n>>r;
ll n1=fact(n);
ll r1=fact(r);
ll k=fact(n-r);
ll ans=nCr(n1,r1,k);

cout<<ans<<endl;

return 0;
}
