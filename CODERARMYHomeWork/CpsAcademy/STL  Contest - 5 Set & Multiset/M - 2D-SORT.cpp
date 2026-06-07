#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
   int t;cin>>t;while(t--){
    ll n;
     cin>>n;
     multiset<pair<ll,ll>>temp;
     while(n--){
        int x,y;
         cin>>x>>y;
        temp.insert({x,-y});
     }
     for(auto &it:temp){
        cout<<it.first<<" "<<-it.second<<endl;
     }

    }


return 0;
}
