#include<bits/stdc++.h>
using namespace std;
void BFS(int startnode,int adj[][5],int visited[],int n){
queue<int>q;
visited[startnode]=1;
q.push(startnode);
while(!q.empty()){
    int node=q.front();
    q.pop();
    cout<<node<<" ";
    for(int j=0;j<n;j++){
        if(adj[node][j]==1 && visited[j]==0){
            visited[j]=1;
            q.push(j);
        }
    }
}

}
int main(){
int adj[5][5]={{0,1,1,0,0},
               {1,0,1,1,1},
               {1,1,0,0,0},
               {0,1,0,0,1},
               {0,1,0,1,0},
               };
int n=5;
int visited[n]={0};
BFS(0,adj,visited,n);
return 0;
}
