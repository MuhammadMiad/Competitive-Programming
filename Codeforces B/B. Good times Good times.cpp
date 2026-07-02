#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
        ll x;cin>>x;
        string str=to_string(x);
        ll size=str.size();
        cout<<(ll)pow(10,size)+1<<endl;

}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}

