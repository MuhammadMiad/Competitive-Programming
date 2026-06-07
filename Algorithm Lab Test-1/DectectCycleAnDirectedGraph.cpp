/**
9 9
0 1
1 2
2 3
3 4
4 6
4 5
5 2
3 7
7 8
Cycle graph
**/
#include<bits/stdc++.h>
using namespace std;
int DFS(int node,vector<int>adj[],vector<bool>&path,vector<bool>&visit){
 visit[node]=1;
 path[node]=1;
 for(int i=0;i<adj[node].size();i++){
    if(path[adj[node][i]])return 1;
    if(visit[adj[node][i]])continue;
    if(DFS(adj[node][i],adj,path,visit))return 1;
 }
 path[node]=0;

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
}

vector<bool>visit(n,0);
vector<bool>path(n,0);
for(int i=0;i<n;i++){
    if(visit[i]==0){
        if(DFS(i,adj,path,visit)){
            cout<<"Cycle Present."<<endl;
            return 0;
        }
    }
}
cout<<"Cycle Not Present."<<endl;

return 0;
}
