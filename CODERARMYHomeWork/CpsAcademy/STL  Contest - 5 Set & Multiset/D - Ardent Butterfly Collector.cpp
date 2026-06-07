#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
set<int>st;
int x;
for(int i=0;i<n;i++){
    cin>>x;
    st.insert(x);
}
int m;cin>>m;
for(int i=0;i<m;i++){
    cin>>x;
    if(st.find(x)!=st.end())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

return 0;
}

