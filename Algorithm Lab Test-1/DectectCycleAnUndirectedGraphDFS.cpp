#include<bits/stdc++.h>
using namespace std;
bool DFS(int node,int parent,vector<int>adj[],vector<bool>&visit){
visit[node]=1;
for(int i=0;i<adj[node].size();i++){
    int child=adj[node][i];
     if(child==parent)continue;
     if(visit[child])return 1;
     if(DFS(child,node,adj,visit))return 1;
}
return 0;
}
int main(){
int n,e;
cin>>n>>e;
vector<int>adj[n];
while(e--){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
   // adj[v].push_back(u);
}
vector<bool>visit(n,0);
for(int i=0;i<n;i++){
    if(visit[i]==0){
      if(DFS(0,-1,adj,visit)){
        cout<<"Cycle Present."<<endl;
        return 0;
      }
    }
}
cout<<"Cycle Not Present."<<endl;
return 0;
}
