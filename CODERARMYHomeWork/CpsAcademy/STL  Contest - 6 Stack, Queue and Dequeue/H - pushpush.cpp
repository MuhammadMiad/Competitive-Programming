#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;cin>>n;
  deque<int>arr;
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(i%2==0)arr.push_back(x);
    else arr.push_front(x);
  }
  if(n%2)reverse(begin(arr),end(arr));
  for(auto &p:arr)cout<<p<<" ";
  cout<<endl;

return 0;
}
