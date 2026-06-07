#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;cin>>n;
    stack<ll>st;
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        if(x==1){
            ll a;cin>>a;
            st.push(a);
        }
        else if(x==2){
           if(!st.empty())st.pop();
        }
        else{
            if(!st.empty()){
                cout<<st.top()<<endl;
            }
            else{
                cout<<"Empty!"<<endl;
            }
        }
    }


return 0;
}
