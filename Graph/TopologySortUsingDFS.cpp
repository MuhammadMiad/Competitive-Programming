/**
Topology Sort Using DFS
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
void DFS(int node,vector<int>adjList[],vector<bool>&visited,stack<int>&st){
 visited[node]=1;
 for(int i=0;i<adjList[node].size();i++){
    if(visited[adjList[node][i]]==0){
        DFS(adjList[node][i],adjList,visited,st);
    }

 }
 st.push(node);
}
int main(){
int v,e;
cin>>v>>e;
vector<int>adjList[v];
int x,y;
while(e--){
 cin>>x>>y;
 adjList[x].push_back(y);
}
stack<int>st;
vector<bool>visited(v,0);
for(int i=0;i<v;i++){
    if(visited[i]==0){
     DFS(i,adjList,visited,st);
    }
}

while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}

return 0;
}




