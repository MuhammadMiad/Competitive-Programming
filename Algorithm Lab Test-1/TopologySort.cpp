#include<bits/stdc++.h>
using namespace std;
void TopologySort(int node,vector<int>adj[],vector<int>&visited,stack<int>&s){
visited[node]=1;
for(int i=0;i<adj[node].size();i++){
    int child=adj[node][i];
    if(visited[child]==0){
        TopologySort(child,adj,visited,s);
    }
}
s.push(node);

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
vector<int>visited(n,0);
stack<int>s;
for(int i=0;i<n;i++){
    if(visited[i]==0){
    TopologySort(i,adj,visited,s);
    }
}
while(!s.empty()){
    cout<<s.top()<<"->";
    s.pop();
}
cout<<endl;

return 0;
}
