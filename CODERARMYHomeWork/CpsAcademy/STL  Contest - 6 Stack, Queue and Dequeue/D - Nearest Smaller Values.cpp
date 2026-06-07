#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;cin>>n;
    stack<pair<int,int>>st;
    st.push({0,0});
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        while(x<=st.top().first){
            st.pop();
        }
        cout<<st.top().second<<" ";
        st.push({x,i});

    }


return 0;
}
