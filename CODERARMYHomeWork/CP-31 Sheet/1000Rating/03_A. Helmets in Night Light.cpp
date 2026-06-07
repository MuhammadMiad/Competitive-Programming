#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
  int n,p;
    cin>>n>>p;
    vector<pair<int,int>>arr(n);
    int x;
    for(int i=0;i<n;i++){
        cin>>arr[i].second;
    }
    for(int i=0;i<n;i++){
        cin>>arr[i].first;
    }
    sort(begin(arr),end(arr));

    ll ans=p;
    ll cnt=1;
    for (ll i=0;i<n;i++){
        if (arr[i].first>p) break;
        if (cnt+arr[i].second<n) {
            ans+=arr[i].first*arr[i].second;
            cnt+=arr[i].second;
        }
        else {
            ans+=(n-cnt)*arr[i].first;
            cout<<ans<<"\n";
            return;
        }
    }
    ans+=p*(n-cnt);
    cout<<ans<<"\n";




}
int main(){
    int t;cin>>t;while(t--){
     solve();
    }


return 0;
}
