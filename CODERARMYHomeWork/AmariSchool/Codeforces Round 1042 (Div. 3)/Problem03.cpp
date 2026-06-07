#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>frame;
  frame.push_back(12);
  frame.push_back(5);
  frame.push_back(7);
  frame.push_back(33);
  ///cout<<find(begin(frame),end(frame),7)-begin(frame)<<endl; ///find out index
  auto it=find(begin(frame),end(frame),7);
  if(it!=frame.end()){
    cout<<"YES"<<endl;
  }
  else cout<<"NO"<<endl;

return 0;
}
