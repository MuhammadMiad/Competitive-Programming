#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;
int gcd(ll a, ll b){
 if(b==0)return a;
 return gcd(b,b%a);
}
int main(){
    int t;
    cin>>t;
    int zero=0;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a==b){
            cout<<"0 0"<<endl;
            continue;
        }

    }

return 0;
}
