#include<bits/stdc++.h>
using namespace std;
void Dijkstra(int V,vector<pair<int,int>>adj[],int S)
{
    vector<bool>visited(V,0);
    vector<int>dist(V,INT_MAX);

    dist[S]=0;
    int count=V;
    while(count--)
    {
        int node=-1,value=INT_MAX;
        for(int i=0; i<V; i++)
        {
            if(visited[i]==0&&value>dist[i])
            {
                node=i;
                value=dist[i];
            }
        }
        visited[node]=1;
        for(int i=0; i<adj[node].size(); i++)
        {
            int neighbour=adj[node][i].first;
            int weight=adj[node][i].second;

            dist[neighbour]=min(dist[node]+weight,dist[neighbour]);
//            if(visited[neighbour]==0&&(dist[node]+weight<dist[neighbour]))
//            {
//                dist[neighbour]=dist[node]+weight;
//            }
        }

    }

    for(int i=0;i<V;i++){
        cout<<i<<" => "<<dist[i]<<endl;
    }
    cout<<endl;
}
int main()
{
    int V,E;
    cin>>V>>E;
    vector<pair<int,int>>adj[V];
    while(E--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        adj[x].push_back(make_pair(y,z));
        adj[y].push_back(make_pair(x,z));
    }
    Dijkstra(V,adj,0);

    return 0;
}
