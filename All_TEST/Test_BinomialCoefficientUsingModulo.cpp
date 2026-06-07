#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
const int mod=1e9+7;
ll fact( ll n){
if(n==0 or n==1)return 1;
return ((n%mod)*fact(n-1))%mod;
}
ll power(ll base,ll pow){
  ll res=1;
  while(pow){
   if(pow%2==1){
    res=(res*base)%mod;
    pow--;
   }else{
    base=(base*base)%mod;
    pow/=2;
   }
  }
  return res%mod;

}
ll nCr(ll ans,ll r1,ll k){
   ll ans1=power(r1,mod-2);
   ll ans2=power(k,mod-2);
   ans=(ans*ans1)%mod;
   ans=(ans*ans2)%mod;
   return ans;


}
int main(){
int n,r;
cin>>n>>r;
ll n1=fact(n);
ll r1=fact(r);
ll k=fact(n-r);

ll an=nCr(n1,r1,k);
cout<<an<<endl;

return 0;
}
