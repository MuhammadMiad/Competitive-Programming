/**
Topology Sort Using BFS(Khan's Algorithm)
               6<--5
               |   |
               v   v
     0--->1--->3-->4
     |    |        ^
     v    ---------|
     2

7 8  0 1  0 2  1 3  1 4  3 4  5 4  5 6  6 3

                      **/
#include<bits/stdc++.h>
using namespace std;
int main(){
int v,e;
cin>>v>>e;
vector<int>adjList[v];
int x,y;
while(e--){
 cin>>x>>y;
 adjList[x].push_back(y);
}
vector<int>inDeg(v,0);
for(int i=0;i<v;i++){
    for(int j=0;j<adjList[i].size();j++){
        inDeg[adjList[i][j]]++;
    }
}
queue<int>q;
for(int i=0;i<v;i++){
    if(inDeg[i]==0)
        q.push(i);
}
vector<int>ans;
while(!q.empty()){
    int node=q.front();
    q.pop();
    ans.push_back(node);
    for(int i=0;i<adjList[node].size();i++ ){
        inDeg[adjList[node][i]]--;
        if(inDeg[adjList[node][i]]==0)
        q.push(adjList[node][i]);
    }
}
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}

return 0;
}





