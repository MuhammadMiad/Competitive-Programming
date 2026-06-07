#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;cin>>t;while(t--){
     int n;cin>>n;
     map<int,vector<int>>mp;
     int x;
     for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin>>x;
            if(x==1)mp[j].push_back(i);
        }
     }
    int div=n/2;
    set<int>st;
    int cnt=0;
    for(auto &p:mp){
        if(p.second.size()>=div){
                cnt++;
            for(auto &it:p.second)st.insert(it);
        }
    }
    if(n==st.size())cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    }


return 0;
}
