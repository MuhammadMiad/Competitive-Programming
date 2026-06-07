#include<bits/stdc++.h>
using namespace std;
void DFS(int node,vector<int>adj[],vector<bool>&visited,stack<int>&s){
visited[node]=1;
for(int i=0;i<adj[node].size();i++){
    if(visited[adj[node][i]]==0){
        DFS(adj[node][i],adj,visited,s);
    }
}
s.push(node);
}
int main(){
    int n,e;
    cin>>n>>e;
    vector<int>adj[n];
    vector<bool>visited(n,0);
    while(e--){
        int x,y;
        cin>>x>>y;
    adj[x].push_back(y);
    }
    stack<int>s;
    for(int i=0;i<n;i++){
        if(visited[i]==0){
            DFS(i,adj,visited,s);
        }
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

return 0;
}
