#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;while(t--){
     int n;cin>>n;
     int mul=1;
     vector<int>ans;
     while(n){
        int rem=n%10;
        if(rem>0){
           ans.push_back(rem*mul);
        }
        mul*=10;
        n/=10;
     }
     cout<<ans.size()<<endl;
     for(auto &p:ans)cout<<p<<" ";
     cout<<endl;


  }


return 0;
}
