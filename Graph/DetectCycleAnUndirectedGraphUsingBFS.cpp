/**
Detect Cycle An UndirectedGraph Using BFS
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

queue<pair<int,int>>q;
q.push({0,-1});
visited[0]=1;
int ans;
while(!q.empty()){
     int node=q.front().first;
     int parent=q.front().second;
     q.pop();

    for(int i=0;i<adjList[node].size();i++){
        if(parent==adjList[node][i])continue;
        if(visited[adjList[node][i]]){
            ans=1;
            break;
        }
        if(visited[adjList[node][i]]==0){
            visited[adjList[node][i]]=1;
            q.push({adjList[node][i],node});
        }
    }
}
if(ans)cout<<"Cycle Present."<<endl;
else cout<<"Cycle Absent."<<endl;

return 0;
}





