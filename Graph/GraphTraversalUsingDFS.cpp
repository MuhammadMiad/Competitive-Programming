/**
  0----1----2
  |   /     |
  |  /      |
  | /       |
  3---------4
 5 6 0 1  0 3  1 2 1 3 2 4 3 4

                      **/
#include<bits/stdc++.h>
using namespace std;
void DFS(int node,vector<int>adjList[],vector<bool>&visited,vector<int>&ans){
 ans.push_back(node);
 visited[node]=1;
 for(int i=0;i<adjList[node].size();i++){
    if(visited[adjList[node][i]]==0){
        DFS(adjList[node][i],adjList,visited,ans);
    }
 }

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
vector<int>ans;
vector<bool>visited(v,0);
DFS(0,adjList,visited,ans);
cout<<"Graph Traverse:"<<endl;
for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";

return 0;
}



