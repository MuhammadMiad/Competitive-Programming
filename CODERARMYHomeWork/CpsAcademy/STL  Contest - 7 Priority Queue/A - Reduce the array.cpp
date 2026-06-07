#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
          int n;cin>>n;
          priority_queue<int,vector<int>,greater<int>>pq;
          for(int i=0;i<n;i++){
            int x;
            cin>>x;
            pq.push(x);
          }

          int sum=0;
          while(pq.size()>1){
            int ff=pq.top();
             pq.pop();
            int ss=pq.top();
            pq.pop();
            sum+=ff+ss;
            pq.push(ff+ss);
          }
         cout<<sum<<endl;

    }

return 0;
}
