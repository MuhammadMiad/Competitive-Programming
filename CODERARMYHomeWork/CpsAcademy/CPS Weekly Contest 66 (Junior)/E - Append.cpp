#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int>q;
  int t;cin>>t;while(t--){
      int n;cin>>n;
      if(n==1){
        int x;cin>>x;
        q.push_front(x);
      }
      else if(n==2){
        int k;cin>>k;
        cout<<q[k-1]<<endl;
      }

  }


return 0;
}

