#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v,v1;
set<int>st;
while(t--){
    int n,k;
    cin>>n;
    for(int i=0;i<n;i++){
            cin>>k;
        v.push_back(k);
        st.insert(k);
    }
    if(v.size()==st.size()){
        v1.push_back(1);
    }
    else
        v1.push_back(0);


    v.clear();
    st.clear();
}

for(int i=0;i<v1.size();i++){
    if(v1[i]==1){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}

return 0;
}
