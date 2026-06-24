#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
              ll n,k;cin>>n>>k;
            ll total=4*n-2;
            if(total==k)cout<<2*n<<endl;
            else if(k%2==0)cout<<k/2<<endl;
            else cout<<k/2+1<<endl;

}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}

