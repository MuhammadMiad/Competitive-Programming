#include<bits/stdc++.h>
using namespace std;
int main(){
   int V,E,S;
   cin>>V>>E;
  priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>p;
   S=E;
   while(E--){
    int u,v,wt;
    cin>>u>>v>>wt;
    p.push({wt,{v,u}});
   }
   while(S--){
    cout<<p.top().first<<" "<<p.top().second.first<<" "<<p.top().second.second<<endl;
    p.top();
   }


return 0;
}
