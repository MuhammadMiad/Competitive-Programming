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
        adj[v].push_back({u,w});
    }
    queue<int>q;
    vector<int>disit(n,1e9);
    vector<int>parent(n,-1);
    q.push(0);
    disit[0]=0;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(int i=0;i<adj[node].size();i++){
             int child=adj[node][i].first;
             int weight=adj[node][i].second;
           if(disit[child]>disit[node]+weight){
            disit[child]=disit[node]+weight;
            parent[child]=node;
            q.push(child);
           }
        }
    }
    vector<int>path;
    int des=n-1;
    while(des!=-1){
        path.push_back(des);
        des=parent[des];
    }
    reverse(begin(path),end(path));
    for(int i=0;i<path.size();i++){
        cout<<path[i]<<" ";
    }
    cout<<endl;

return 0;
}
