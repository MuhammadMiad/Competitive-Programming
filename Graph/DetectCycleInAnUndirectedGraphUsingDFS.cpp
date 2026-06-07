/**
Detect Cycle An UndirectedGraph Using DFS
       6
       |
       |
  0----1----2
            |
            |
            |
      4-----3
             \
              \
               5

7 6  0 1  1 6  1 2  2 3  3 4  3 5

                      **/
#include<bits/stdc++.h>
using namespace std;
bool DFS(int node,int parent,vector<int>adjList[],vector<bool>&visited){
 visited[node]=1;
 for(int i=0;i<adjList[node].size();i++){
    if(adjList[node][i]==parent)continue;
    if(visited[adjList[node][i]])return 1;
    if(DFS(adjList[node][i],node,adjList,visited))return 1;
 }
 return 0;
}
int main(){
int v,e;
cin>>v>>e;
vector<int>adjList[v];
int x,y;
while(e--){
 cin>>x>>y;
 adjList[x].push_back(y);
 adjList[y].push_back(x);
}
vector<bool>visited(v,0);

int ans=DFS(0,-1,adjList,visited);
if(ans)cout<<"Cycle Present."<<endl;
else cout<<"Cycle Absent."<<endl;

return 0;
}




