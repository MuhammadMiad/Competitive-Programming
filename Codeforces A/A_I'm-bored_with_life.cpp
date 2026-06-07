#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fact(ll a){
   if(a==1)
    return 1;
   else{
    return a* fact(a-1);
   }
}
 int  GCD(ll a, ll b){
   if(b==0) return a;
   return GCD(b,a%b);
}

int main(){
    ll a,b,p,q,gcd;
    cin>>a>>b;
    p=fact(a);
    q=fact(b);


//    int mn=min(p,q);p
//    int  mx=max(p,q);
    gcd=GCD(p,q);
    cout<<gcd<<endl;



return 0;
}
