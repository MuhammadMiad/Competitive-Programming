#include<bits/stdc++.h>
using namespace std;
void Dijkstra(int vertex,vector<pair<int,int>>adj[],int s){
vector<int>dist(vertex,INT_MAX);
vector<bool>explore(vertex,0);
dist[s]=0;
int cnt=vertex;
while(cnt--){
    int node=-1,value=INT_MAX;
    for(int i=0;i<vertex;i++){
        if(explore[i]==0&&value>dist[i]){
            node=i;
            value=dist[i];
        }
    }
    explore[node]=1;
    for(int i=0;i<adj[node].size();i++){
        int neig=adj[node][i].first;
        int weight=adj[node][i].second;
      if(explore[neig]==0&&dist[node]+weight<dist[neig]){
        dist[neig]=dist[node]+weight;
      }
    }
}

for(int i=0;i<vertex;i++){
    cout<<i<<"->"<<dist[i]<<"  ";
}
cout<<endl;
}
int main(){
int n,e;
cin>>n>>e;
vector<pair<int,int>>adj[n];
while(e--){
    int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));
}
int source=0;
Dijkstra(n,adj,source);


return 0;
}
