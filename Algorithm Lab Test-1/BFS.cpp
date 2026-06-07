#include<bits/stdc++.h>
using namespace std;
void BFS(int nod,int n,vector<int>adj[],vector<bool>&visit,vector<int>&ans){
queue<int>q;
q.push(nod);
visit[nod]=1;
while(!q.empty()){
    int node=q.front();
    q.pop();
    ans.push_back(node);
    for(int i=0;i<adj[node].size();i++){
    int child=adj[node][i];
    if(visit[child]==0){
        q.push(child);
        visit[child]=1;
    }
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
BFS(0,n,adj,visit,ans);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
cout<<endl;

return 0;
}
