#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
      ll n,d;cin>>n>>d;
      ll x,y;
      ll ans=0;
      while(n--){
       cin>>x>>y;
       if(x<=d)ans+=y;
      }
      cout<<ans<<endl;

    return 0;
}