#include<bits/stdc++.h>
using namespace std;
bool DetectCycle(int vertex,vector<int>adj[],vector<bool>&visited){
queue<pair<int,int>>q;
visited[vertex]=1;
q.push(make_pair(vertex,-1));
while(!q.empty()){
    int node=q.front().first;
    int parent=q.front().second;
    q.pop();
    for(int i=0;i<adj[node].size();i++){
        if(parent==adj[node][i])continue;
        if(visited[adj[node][i]]==1)return 1;
        visited[adj[node][i]]=1;
        q.push(make_pair(adj[node][i],node));
    }

}
return 0;
}
int main(){
int node,edge;
cin>>node>>edge;
vector<int>adj[node];
vector<bool>visited(node,0);
while(edge--){
    int x,y;
    cin>>x>>y;
 adj[x].push_back(y);
 adj[y].push_back(x);
}
bool ans;
for(int i=0;i<node;i++){
    if(!visited[i]&& DetectCycle(i,adj,visited))
        ans=true;
}
if(ans==true)cout<<"Graph has a Cycle"<<endl;
else cout<<"Graph has not Cycle"<<endl;


return 0;
}
