#include<bits/stdc++.h>
using namespace std;
bool UseDFS(int node,vector<int>adj[],vector<int>color){
for(int i=0;i<adj[node].size();i++){
    if(color[adj[node][i]]==-1){
        color[adj[node][i]]=(color[node]+1)%2;
        if(!UseDFS(adj[node][i],adj,color))return 0;
    }
    else{
        if(color[adj[node][i]]==color[node])return 0;
    }

}

return 1;
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
    vector<int>color(n,-1);
    for(int i=0;i<n;i++){
        if(color[i]==-1){
                color[i]=0;
            if(UseDFS(i,adj,color)){
                cout<<"Bipartite Graph."<<endl;
                return 0;
            }
        }
    }
    cout<<"Not Bipartite Graph."<<endl;

return 0;
}
