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
queue<int>q;
q.push(0);
visited[0]=1;
while(!q.empty()){
    int node=q.front();
    q.pop();
    ans.push_back(node);

    for(int i=0;i<adjList[node].size();i++){
         if(visited[adjList[node][i]]==0){
            visited[adjList[node][i]]=1;
            q.push(adjList[node][i]);
         }

    }
}
cout<<"Graph Traverse:"<<endl;
for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";

return 0;
}


