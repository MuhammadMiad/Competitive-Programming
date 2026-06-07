#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,pair<int,int>>>arr;
 int t;cin>>t;while(t--){
   int h,m,s;
   cin>>h>>m>>s;
   arr.push_back({h,{m,s}});
 }
 sort(begin(arr),end(arr));
  for(auto p:arr)cout<<p.first<<" "<<p.second.first<<" "<<p.second.second<<endl;


return 0;
}
