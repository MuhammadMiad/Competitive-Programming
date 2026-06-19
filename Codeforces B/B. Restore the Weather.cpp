#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
         ll n,k;cin>>n>>k;
         vector<pair<ll,ll>>v;
         vector<ll>b(n);
         for(int i=0;i<n;i++){
            int x;cin>>x;
            v.push_back({x,i});
         }

         for(int i=0;i<n;i++)cin>>b[i];

         sort(begin(v),end(v));
         sort(begin(b),end(b));

         for(int i=0;i<n;i++){
            v[v[i].second].first=b[i];
         }

         for(int i=0;i<n;i++)cout<<v[i].first<<" ";
         cout<<endl;
}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}

