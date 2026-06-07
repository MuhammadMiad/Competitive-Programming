#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>dq;
  dq.push_front(10);
  dq.push_front(20);
  dq.push_front(30);
  dq.push_front(40);
  dq.push_back(20);
  dq.push_back(30);
  dq.push_back(40);
  for(auto it:dq)cout<<it<< " ";
  cout<<endl;
  cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
  dq.pop_front();
  dq.pop_back();
  dq.insert(dq.begin()+2,3,100);
  dq.erase(dq.begin()+3,dq.end()-2);
  for(int i=0;i<dq.size();i++)cout<<dq[i]<<" ";
  cout<<endl;
  return 0;
}
