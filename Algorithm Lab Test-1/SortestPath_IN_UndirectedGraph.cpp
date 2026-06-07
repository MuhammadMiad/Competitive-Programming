#include<bits/stdc++.h>
using namespace std;
//void SortestPath(int node,vector<int>adj[],vector<int>&dist,vector<int>&visited){
// for(int i=0;i<adj[node].size();i++){
//    int child=adj[node][i];
//    if(visited[child]==0){
//        visited[child]=1;
//        dist[child]=dist[node]+1;
//        SortestPath(child,adj,dist,visited);
//    }
// }
//
//}
int main(){
int n,e;
cin>>n>>e;
vector<int>adj[n];
while(e--){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
vector<int>dist(n,-1);
vector<int>visited(n,0);
queue<int>q;
dist[0]=0;
visited[0]=1;
q.push(0);
while(!q.empty()){
    int node=q.front();
    q.pop();
    for(int i=0;i<adj[node].size();i++){
        if(visited[adj[node][i]]==0){
            visited[adj[node][i]]=1;
            dist[adj[node][i]]=dist[node]+1;
            q.push(adj[node][i]);
        }
    }
}

for(int it:dist){
    cout<<it<<" ";
}
cout<<endl;

return 0;
}
