#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;
void solve(){
       ll a,b,c;
       cin>>a>>b>>c;
       ll mx=0;
       mx=max(mx,abs(a-b));
       mx=max(mx,abs((a+c)-b));

       cout<<mx<<endl;

}
int main(){
    int t;cin>>t;while(t--)solve();
return 0;
}
