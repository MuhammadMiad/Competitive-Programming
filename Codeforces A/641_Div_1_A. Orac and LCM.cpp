#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
     ll n;cin>>n;
     vector<ll>arr(n),suf(n);
     for(auto &c:arr)cin>>c;
     suf[n-1]=arr[n-1];
     for(int i=n-2;i>=0;i--){
        suf[i]=__gcd(arr[i],suf[i+1]);
     }

     ll ans=0;
     for(int i=0;i<n-1;i++){
        ll lcm=arr[i]/__gcd(arr[i],suf[i+1])*suf[i+1];

        ans=__gcd(ans,lcm);
     }


     cout<<ans<<endl;


return 0;
}
