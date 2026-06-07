#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;cin>>n>>m;
    multiset<int>st;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        st.insert(x);
    }
    st.insert(-1);

    while(m--){
        int k;
        cin>>k;
        auto index=st.upper_bound(k);
         index--;
        cout<<*index<<endl;
        if(*index!=-1){
            st.erase(index);
        }

    }

    return 0;
}
