#include<bits/stdc++.h>
using namespace std;
bool KhanAlgo(int V,vector<int>adj[]){
vector<int>inDeg(V,0);
queue<int>q;
int co=0;
for(int i=0;i<V;i++){
    for(int j=0;j<adj[i].size();j++){
        inDeg[adj[i][j]]++;
    }
}
for(int i=0;i<V;i++){
    if(inDeg[i]==0)q.push(i);
}

while(!q.empty()){
    int node=q.front();
    q.pop();
    co++;
    for(int i=0;i<adj[node].size();i++){
        inDeg[adj[node][i]]--;
        if(inDeg[adj[node][i]]==0)q.push(adj[node][i]);
    }
}
return V!=co;

}
int  main(){
    int V,E;
    cin>>V>>E;
    vector<int>adj[V];
    while(E--){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }
    bool ans=KhanAlgo(V,adj);
    if(ans==true)cout<<"Directed Graph is Cycle"<<endl;
    else cout<<"Directed Graph is not Cycle"<<endl;
return 0;
}
