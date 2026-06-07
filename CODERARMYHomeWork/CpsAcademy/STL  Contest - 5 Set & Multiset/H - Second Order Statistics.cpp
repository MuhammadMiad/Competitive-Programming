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
  if(st.size()==1){
    cout<<"NO"<<endl;
    return 0;
  }
  auto it=st.begin();
  st.erase(it);
  cout<<*st.begin()<<endl;

return 0;
}
