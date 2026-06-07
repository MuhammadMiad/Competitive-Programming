#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
 multiset<pair<int,int>>st;
while(1){
    ll n;
    cin>>n;
    if(n==0)break;
    else if(n==1){
        ll k,p;
        cin>>k>>p;
        st.insert({p,k});
    }
    else if(n==2){
        if(st.empty())cout<<0<<endl;
        else{
        auto it=st.end();
        it--;
        cout<<it->second<<endl;
        st.erase(prev(st.end()));
        }

    }
    else{
        if(st.empty())cout<<0<<endl;
        else{
        cout<<st.begin()->second<<endl;
        st.erase(st.begin());
        }

    }


      }
return 0;
}
