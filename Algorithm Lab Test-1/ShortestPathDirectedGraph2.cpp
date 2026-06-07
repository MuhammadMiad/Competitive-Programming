/**
8 8
0 1 4
0 2 3
1 3 6
2 4 2
4 5 1
5 3 2
3 6 5
6 7 4
**/
/**


**/

#include<bits/stdc++.h>
using namespace std;
void Topology(int node,vector<pair<int,int>>adj[],vector<int>&visit,stack<int>&st){
visit[node]=1;
for(int i=0;i<adj[node].size();i++){
    if(visit[adj[node][i].first]==0){
        Topology(adj[node][i].first,adj,visit,st);
    }
}
st.push(node);

}
int main(){
int n,e;
cin>>n>>e;
vector<pair<int,int>>adj[n];
while(e--){
    int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back({v,w});
}
vector<int>visit(n,0);
stack<int>st;
Topology(0,adj,visit,st);

vector<int>dist(n,1e9);
dist[0]=0;
while(!st.empty()){
    int node=st.top();
    st.pop();
    for(int i=0;i<adj[node].size();i++){
        int child=adj[node][i].first;
        int weight=adj[node][i].second;
        if(dist[child]>dist[node]+weight){
            dist[child]=dist[node]+weight;
        }
    }
}

for(int i=0;i<dist.size();i++){
    cout<<dist[i]<<" ";
}
cout<<endl;

return 0;
}

