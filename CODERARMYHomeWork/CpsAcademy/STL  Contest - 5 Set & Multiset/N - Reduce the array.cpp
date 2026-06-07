#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;
        cin>>n;
        multiset<ll>st;
        for(int i=0;i<n;i++){
            ll x;cin>>x;
            st.insert(x);
        }
        ll ans=0;
        while(st.size()>1){
            ll x=*st.begin();
            st.erase(st.begin()); /// x delete korle x er value multiple thakle delete hoye zeto but ekhon hobe na
            ll y=*st.begin();
            st.erase(st.begin());
            ans+=x+y;
            st.insert(x+y);
        }

        cout<<ans<<endl;

    }
return 0;
}
