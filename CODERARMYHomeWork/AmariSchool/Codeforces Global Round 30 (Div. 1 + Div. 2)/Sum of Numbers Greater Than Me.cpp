#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
     ll n;cin>>n;
     vector<ll>arr(n);
     unordered_map<ll,ll>mp;
     set<ll>st;
     ll mx=0;
     for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]+=arr[i];
        st.insert(arr[i]);
        mx+=arr[i];
     }

     for(auto &val:st){
        mx-=mp[val];
        mp[val]=mx;
     }

     for(int i=0;i<n;i++){
        cout<<mp[arr[i]]<<" ";
     }
     cout<<endl;


return 0;
}
