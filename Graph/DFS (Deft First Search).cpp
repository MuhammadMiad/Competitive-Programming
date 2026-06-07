#include<bits/stdc++.h>
using namespace std;
void DFS(int Node,vector<int>adj[],vector<bool>&visited,vector<int>&ans){
  visited[Node]=1;
  ans.push_back(Node);
  for(int i=0;i<adj[Node].size();i++){
    if(!visited[adj[Node][i]]){
        DFS(adj[Node][i],adj,visited,ans);
    }
  }
}
int main(){
int vertex,edges;
cin>>vertex>>edges;
vector<int>adj[vertex];
vector<int>ans;
vector<bool>visited(vertex,0);
while(edges--){
        int x,y;
        cin>>x>>y;
   adj[x].push_back(y);
   adj[y].push_back(x);
}
DFS(0,adj,visited,ans);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
cout<<endl;

return 0;
}
