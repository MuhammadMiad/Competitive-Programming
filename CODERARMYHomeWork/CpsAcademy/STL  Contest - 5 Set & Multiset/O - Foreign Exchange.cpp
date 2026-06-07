#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    multiset<pair<long long,long long>>st;
    for(int i=0;i<n;i++){
        long long x,y;
        cin>>x>>y;
        auto it=st.find({y,x});
        if(it==st.end()){
            st.insert({x,y});
        }
        else{
            st.erase(it);
        }
    }
    //cout<<st.size()<<endl;
    if(st.size()==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


  }

return 0;
}
