#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    unordered_set<int>st;
    int p;cin>>p;
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    int q;cin>>q;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        st.insert(x);
    }
    if(st.size()==n)cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;



return 0;
}
