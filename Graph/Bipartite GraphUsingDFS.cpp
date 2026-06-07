#include<bits/stdc++.h>
using namespace std;
bool isBipartite(int node,vector<int>adj[],vector<int>&color){
for(int i=0;i<adj[node].size();i++){
    if(color[adj[node][i]]==-1){
        color[adj[node][i]]=(color[node]+1)%2;
         if(!isBipartite(adj[node][i],adj,color))return 0;
    }
    else{
        if(color[adj[node][i]]==color[node])return 0;
    }
}
return 1;
}
int main(){
int V,E;
cin>>V>>E;
vector<int>adj[V];
while(E--){
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}
vector<int>color(V,-1);
bool ans;
for(int i=0;i<V;i++){
    if(color[i]==-1){
        color[i]=0;
        ans=isBipartite(i,adj,color);
    }
}
if(ans)cout<<"Graph is  a Bipartite"<<endl;
else cout<<"Graph is not a Bipartite"<<endl;
return 0;
}
