#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
while(1){
    ll n,m;
    cin>>n>>m;
    ll cnt=0;
    if(n==0 and m==0)break;
    else{
        set<ll>st;
        ll x;

        for(int i=0;i<n;i++){
            cin>>x;
            st.insert(x);
        }
        for(int i=0;i<m;i++){
            cin>>x;
            if(st.find(x)!=st.end())cnt++;
        }

    }
cout<<cnt<<endl;
}
return 0;
}
