#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b){
    if(a==0)return b;
    return gcd(b%a,a);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,k;
        cin>>a>>b>>k;
        if(a<=k and b<=k){
            cout<<1<<endl;
            continue;
        }
        if(a%gcd(a,b)==0 and  b%gcd(a,b)==0 and gcd(a,b)>1){
            cout<<1<<endl;
        }
        else cout<<2<<endl;
    }


return 0;
}
