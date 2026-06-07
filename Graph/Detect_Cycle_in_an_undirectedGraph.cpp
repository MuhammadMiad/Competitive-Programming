#include<bits/stdc++.h>
using namespace std;
bool DetectCycle(int node,int parent,vector<int>adj[],vector<bool>&visited){
 visited[node]=1;
 for(int i=0;i<adj[node].size();i++){
    if(parent==adj[node][i])continue;
    if(visited[adj[node][i]]==1)return 1;
    if(DetectCycle(adj[node][i],node,adj,visited))return 1;
 }
 return 0;
}
int main(){
int vertex,edges;
cin>>vertex>>edges;
vector<int>adj[vertex];
vector<bool>visited(vertex,0);
while(edges--){
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}
bool ans= DetectCycle(0,-1,adj,visited);
if(ans==true)cout<<"Graph has a Cycle"<<endl;
else cout<<"Graph has not  Cycle"<<endl;

return 0;
}
