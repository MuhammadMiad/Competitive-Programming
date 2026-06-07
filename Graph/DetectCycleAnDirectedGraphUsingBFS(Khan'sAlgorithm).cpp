/**
Detect Cycle An Directed Graph Using BFS
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
if(ans.size()!=v)cout<<"Cycle Present."<<endl;
else cout<<"Cycle Absent."<<endl;

return 0;
}






