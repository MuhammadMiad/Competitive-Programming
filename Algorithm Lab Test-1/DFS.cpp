#include<bits/stdc++.h>
using namespace std;
void DFS(int node,int n,vector<int>adj[],vector<bool>&visit,vector<int>&ans){
visit[node]=1;
ans.push_back(node);
for(int i=0;i<adj[node].size();i++){
    int child=adj[node][i];
    if(visit[child]==0){
        DFS(child,n,adj,visit,ans);
    }
}
}
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
vector<int>ans;
vector<bool>visit(n,0);
DFS(0,n,adj,visit,ans);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
cout<<endl;

return 0;
}
