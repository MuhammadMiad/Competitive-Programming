/**
Bipartite Graph Using DFS
                     8 1
                     |
                     |
                     7 0
                     |
         0   1   0   |
         0---1---2---3 1
                 |   |
                 |   |
               1 5---4---6 1
                     0
                  Graph-2

Graph-1: 9 10  0 1  1 2  2 3  3 7  7 8  3 4  3 5  4 5  4 6  5 2 (No)
Graph-2: 9 9  0 1  1 2  2 3  3 7  7 8  3 4   4 5  4 6  5 2 (Yes))

                      **/
#include<bits/stdc++.h>
using namespace std;
bool DFS(int node ,vector<int>adjList[],vector<int>&color){
for(int i=0;i<adjList[node].size();i++){
    if(color[adjList[node][i]]==-1){
       color[adjList[node][i]]=(color[node]+1)%2;
       if(!DFS(adjList[node][i],adjList,color))
       return 0;

    }
    else{
        if(color[adjList[node][i]]==color[node])
            return 0;
    }
}
return 1;
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

vector<int>color(v,-1);
for(int i=0;i<v;i++){
    if(color[i]==-1){
            color[i]=0;
        if(!DFS(i,adjList,color)){
            cout<<" Not Bipartite Graph."<<endl;
            return 0;
        }
    }
}
cout<<" Bipartite Graph."<<endl;

return 0;
}







