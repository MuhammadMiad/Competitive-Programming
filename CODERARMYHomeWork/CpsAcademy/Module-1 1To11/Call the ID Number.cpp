#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  vector<int>arr(n+1);
  for(int i=1;i<=n;i++)cin>>arr[i];
  unordered_set<int>st;
  for(int i=1;i<=n;i++){
    if(!st.count(i)){
        st.insert(arr[i]);
    }
  }
  vector<int>ans;
  for(int i=1;i<=n;i++){
    if(!st.count(i))ans.push_back(i);
  }
  cout<<ans.size()<<endl;
  for(auto &p:ans)cout<<p<<" ";
  cout<<endl;

return 0;
}
