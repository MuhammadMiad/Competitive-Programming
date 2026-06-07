#include<bits/stdc++.h>
using namespace std;
bool DetectCycle(int node,vector<int>adj[],vector<bool>&path,vector<bool>&visited){
 visited[node]=1;
 path[node]=1;
 for(int i=0;i<adj[node].size();i++){
    if(path[adj[node][i]])return 1;
    if(visited[adj[node][i]]==1)continue;
    if(DetectCycle(adj[node][i],adj,path,visited))return 1;
 }
 path[node]=0;
 return 0;
}
int main(){
int vertex,edges;
cin>>vertex>>edges;
vector<int>adj[vertex];
vector<bool>visited(vertex,0);
vector<bool>path(vertex,0);
while(edges--){
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
}
bool ans;
for(int i=0;i<vertex;i++){
    if(visited[i]==0){
        ans=DetectCycle(i,adj,path,visited);
    }
}
if(ans==true)cout<<"Graph has a Cycle"<<endl;
else cout<<"Graph has not  Cycle"<<endl;

return 0;
}

