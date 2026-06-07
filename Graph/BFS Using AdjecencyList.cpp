#include<bits/stdc++.h>
using namespace std;
void BFSGraph(int startnode,int V,vector<int>adj[]){
queue<int>q;
vector<bool>visited(V,0);
q.push(startnode);
visited[startnode]=1;
while(!q.empty()){
    int node=q.front();
    q.pop();
    cout<<node<<" ";
    for(int i=0;i<adj[node].size();i++){
        int child=adj[node][i];
        if(visited[child]==0){
            visited[child]=1;
            q.push(child);
        }
    }
}
}
int main(){
int vertex,edges;
cin>>vertex>>edges;
vector<int>adj[vertex];
while(edges--){
  int x,y;
  cin>>x>>y;
  adj[x].push_back(y);
  adj[y].push_back(x);
}
BFSGraph(0,vertex,adj);
return 0;
}
