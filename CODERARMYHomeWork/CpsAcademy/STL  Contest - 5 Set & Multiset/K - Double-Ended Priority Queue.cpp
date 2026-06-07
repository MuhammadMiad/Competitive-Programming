#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){

    ll n,q;
    cin>>n>>q;

    multiset<ll>st;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    while(q--){
        ll a,b;
        cin>>a;
        if(a==0){
            cin>>b;
             st.insert(b);
        }
        else if(a==1){
            cout<<*st.begin()<<endl;
            st.erase(st.begin());
        }
        else{
            cout<<*prev(st.end())<<endl;
            st.erase(prev(st.end()));
        }
    }

return 0;
}
