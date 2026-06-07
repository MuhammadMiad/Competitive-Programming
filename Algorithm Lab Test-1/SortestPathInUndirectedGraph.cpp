#include<bits/stdc++.h>
using namespace std;
void Path(int v,vector<int>adj[],vector<int>&parent,vector<int>&visit){
queue<int>q;
q.push(v);
visit[v]=1;
while(!q.empty()){
    int node=q.front();
    q.pop();
 for(int i=0;i<adj[node].size();i++){
    if(visit[adj[node][i]]==0){
        parent[adj[node][i]]=node;
        visit[adj[node][i]]=1;
        q.push(adj[node][i]);
    }
}

}
int len=parent.size();
vector<int>path(parent[len-1]);
int index=parent[len-1]-1;
int temp=len-1;
while(temp!=-1){
    path[index--]=temp;
    temp=parent[temp];
}


for(int i=0;i<path.size();i++){
    cout<<path[i]<<" ";
}
cout<<endl;

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
vector<int>parent(n,-1);
vector<int>visit(n,0);
Path(0,adj,parent,visit);


return 0;
}
