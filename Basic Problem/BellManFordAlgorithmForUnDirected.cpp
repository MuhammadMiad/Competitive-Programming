/**
Simple:1
input:
5 6
0 1 3
0 2 2
2 4 6
2 3 5
1 3 1
3 4 3
output:0,3,2,4,7

Simple:2
input:
5 6
0 2 -2
0 1 3
2 4 6
2 3 5
1 3 1
3 4 -3
output:
0 3 -2 3 0
**/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int vertex,edges;
    cin>>vertex>>edges;
    vector<vector<int>>adj;
    for (int i = 0; i <edges; ++i) {
            int u,v,w;
            cin >>u>>v>>w;
            vector<int> edge(3);
            edge[0] = u;
            edge[1] = v;
            edge[2] = w;
            adj.push_back(edge);
        }
    vector<int>dist(vertex,1e8);
        int e=edges;
        dist[0]=0;
        for(int i=0;i<vertex-1;i++){
            for(int j=0;j<e;j++){
               int u=adj[j][0];
               int v=adj[j][1];
               int w=adj[j][2];

               if(dist[u]==1e8)continue;

               if(dist[u]+w<dist[v]){
                   dist[v]=dist[u]+w;
              }
            }
        }

            for(int j=0;j<e;j++){
                int u=adj[j][0];
              int v=adj[j][1];
               int w=adj[j][2];

              if(dist[u]==1e8)continue;

               if(dist[u]+w<dist[v]){
                 cout<<"-1"<<endl;
                 return 0;
               }
            }
            for(int i=0;i<dist.size();i++){
                cout<<dist[i]<<" ";

            }
           cout<<endl;

    return 0;
}
