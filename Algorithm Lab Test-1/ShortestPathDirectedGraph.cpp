#include<bits/stdc++.h>
using namespace std;
int main(){
int n,e;
cin>>n>>e;
vector<pair<int,int>>adj[n];
while(e--){
    int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back({v,w});
}
vector<int>dist(n,1e9);
queue<int>q;
q.push(0);
dist[0]=0;
while(!q.empty()){
    int node=q.front();
    q.pop();
    for(int i=0;i<adj[node].size();i++){
        int child=adj[node][i].first;
        int weight=adj[node][i].second;
        if(dist[child]>dist[node]+weight){
            dist[child]=dist[node]+weight;
            q.push(child);
        }
    }
}
for(int i=0;i<dist.size();i++){
    cout<<dist[i]<<" ";
}
cout<<endl;

return 0;
}
