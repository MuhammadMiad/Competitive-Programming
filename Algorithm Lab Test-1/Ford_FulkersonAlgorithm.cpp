/**
7 12
0 1 7
0 2 10
1 2 1
1 4 5
1 3 3
2 5 7
2 3 2
3 4 3
3 5 2
4 5 2
4 6 10
5 6 4
**/

#include<bits/stdc++.h>
using namespace std;
int bfs(int source,int sink,vector<int>&parent,vector<vector<int>>&residualGraph){
fill(parent.begin(),parent.end(),-1);
int V=residualGraph.size();
parent[source]=-2;
queue<pair<int,int>>q;
q.push({source,INT_MAX});
while(!q.empty()){
    int u=q.front().first;
    int capacity=q.front().second;
    q.pop();
    for(int i=0;i<V;i++){
        if(u!=i && parent[i]==-1&&residualGraph[u][i]!=0){
            parent[i]=u;
            int min_cap=min(capacity,residualGraph[u][i]);
            if(i==sink)
                return min_cap;
            q.push({i,min_cap});
        }
    }
}
return 0;
}
int FordFulkerson(vector<vector<int>>&graph,int source,int sink){
vector<int>parent(graph.size(),-1);
vector<vector<int>>residualGraph=graph;
int min_cap=0,max_flow=0;
while(min_cap=bfs(source,sink,parent,residualGraph)){
    max_flow+=min_cap;
    int u=sink;
    while(u!=source){
        int v=parent[u];
        residualGraph[u][v]+=min_cap;
        residualGraph[v][u]-=min_cap;
        u=v;
    }
}
return max_flow;
}
int main(){
int vertex,edge;
cin>>vertex>>edge;
vector<vector<int>>graph(vertex,vector<int>(vertex,0));
while(edge--){
    int u,v,w;
    cin>>u>>v>>w;
    graph[u][v]=w;
}

cout<<"Maximum flow "<<FordFulkerson(graph,0,vertex-1)<<endl;


return 0;
}
