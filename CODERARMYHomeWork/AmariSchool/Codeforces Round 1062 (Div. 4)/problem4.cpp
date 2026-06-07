#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t;cin>>t;while(t--){
    int n;cin>>n;

    vector<ll>a(n);
    for (auto &x:a)cin>>x;

    vector<int> primes;
    vector<bool>isPrime(10001,true);
    for(int i=2;i<=10000;i++){
        if(isPrime[i]) {
            primes.push_back(i);
            for (ll j=i*i;j<=10000;j+=i)
                isPrime[j]=false;
        }
    }


    ll store=-1;
    for(auto p:primes){
        for(auto x:a){
            if (__gcd(x,(ll)p)==1){
                store=p;
                break;
            }
        }
        if(store!=-1)break;
    }

    cout <<store<<endl;
}
return 0;
}
