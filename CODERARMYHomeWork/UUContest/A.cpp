#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;
int main(){
  int t;
  cin>>t;
  while(t--){
    ll n,c;
    cin>>n>>c;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(begin(arr),end(arr));
    ll ans=0,mul=1;
    for(int i=0;i<n;i++){
       arr[i]*=mul;
       if(arr[i]<=c){
        mul*=2;
       }
       else ans++;
    }
    cout<<ans<<endl;

  }

return 0;
}
