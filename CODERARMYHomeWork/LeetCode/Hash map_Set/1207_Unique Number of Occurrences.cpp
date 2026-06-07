#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    set<int>st;
    int cnt=0;
   for(auto it:mp){
    cnt++;
    st.insert(it.second);
   }
   if(st.size()==cnt)cout<<"True"<<endl;
   else cout<<"False"<<endl;

return 0;
}
