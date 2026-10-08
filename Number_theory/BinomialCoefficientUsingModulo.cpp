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

//Method
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll Mod=1e9+7;
const ll N=1e6+5;

ll precompute[N];
ll invFact[N];
ll NrC(ll base,ll power,ll m){
      ll result=1;
      while(power){
           if(power%2){
             result=(result*base)%m;
            power--;
           }
           else{
                base=(base*base)%m;
            power/=2;
           }
      }
   return result;

}

void  fact(){
        precompute[0]=1;
        for(ll i=1;i<N;i++){
            precompute[i]=(precompute[i-1]*i)%Mod;
        }
         invFact[N-1]=NrC(precompute[N-1],Mod-2,Mod);
        for(ll i=N-1;i>0;i--){
            invFact[i-1]=(invFact[i]*i)%Mod;
        }

}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(nullptr);
    fact();
int t;cin>>t;while(t--){
       ll a,b;cin>>a>>b;
   if (b< 0 || b > a||a>=N ) { cout << 0 << '\n'; continue; }

  ll  ans =(( (precompute[a] * invFact[b] )% Mod )* invFact[a- b] )% Mod;

cout<<ans<<'\n';

}


return 0;
}

//Method
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll Mod=1e9+7;
const ll N=1e6+5;

ll precompute[N];
ll NrC(ll base,ll power,ll m){
      ll result=1;
      while(power){
           if(power%2){
             result=(result*base)%m;
            power--;
           }
           else{
                base=(base*base)%m;
            power/=2;
           }
      }
   return result;

}

void  fact(){
        precompute[0]=1;
        for(ll i=1;i<N;i++){
            precompute[i]=(precompute[i-1]*i)%Mod;
        }

}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(nullptr);
    fact();
int t;cin>>t;while(t--){
       ll a,b;cin>>a>>b;


    ll a1=precompute[a];
    ll b1=precompute[b];
    ll c1=precompute[a-b];

    ll ans=a1;
       ans=ans*NrC(b1,Mod-2,Mod)%Mod;
       ans=ans*NrC(c1,Mod-2,Mod)%Mod;

       cout<<ans<<endl;



}


return 0;
}

