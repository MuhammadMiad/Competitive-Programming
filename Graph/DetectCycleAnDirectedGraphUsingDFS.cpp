/**
Detect Cycle An Directed Graph Using DFS
                    8
                    ^
                    |
                    7
                    ^
                    |
     0--->1--->2--->3
               ^    |
               |    v
               5<---4-->6

               Graph-1;

Graph-1:9 9  0 1  1 2  2 3  3 7  7 8  3 4   4 5  4 6  5 2 Yes cycle
Graph-2:9 9  0 1  1 2  2 3  3 7  7 8  3 4   4 6  2 5  5 4 Not cycle

                      **/
#include<bits/stdc++.h>
using namespace std;
DFS(int node,vector<int>adjList[],vector<bool>&visited,vector<bool>&path){
 visited[node]=1;
 path[node]=1;
 for(int i=0;i<adjList[node].size();i++){
    if(path[adjList[node][i]])return 1;
    if(visited[adjList[node][i]])continue;
    if(DFS(adjList[node][i],adjList,visited,path))
        return 1;
 }
 path[node]=0;

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
}
vector<bool>visited(v,0);
vector<bool>path(v,0);
bool ans=DFS(0,adjList,visited,path);
if(ans)cout<<"Cycle present."<<endl;
else cout<<"Cycle absent."<<endl;

return 0;
}





