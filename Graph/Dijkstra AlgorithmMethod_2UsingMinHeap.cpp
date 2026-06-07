#include<bits/stdc++.h>
using namespace std;
void Dijkstra(int V,vector<pair<int,int>>adj[],int S)
{
    vector<bool>visited(V,0);
    vector<int>dist(V,INT_MAX);
    vector<int>parent(V,-1);
    dist[S]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
     p.push({0,S});
    while(!p.empty())
    {

        int node=p.top().second;
        p.pop();
        if(visited[node]==1)continue;
        visited[node]=1;
        for(int i=0; i<adj[node].size(); i++)
        {
            int neighbour=adj[node][i].first;
            int weight=adj[node][i].second;


            if(visited[neighbour]==0&&(dist[node]+weight<dist[neighbour]))
            {
                dist[neighbour]=dist[node]+weight;
                p.push({dist[neighbour],neighbour});
                parent[neighbour]=node;
            }
        }

    }

    vector<int>path;
    if(parent[V-1]==-1){
        path.push_back(-1);
    }
    else{
         int dest=V-1;
    while(dest!=-1){
        path.push_back(dest);
        dest=parent[dest];
    }
    reverse(path.begin(),path.end());
    }

    for(int i=0;i<V;i++){
        cout<<i<<" => "<<dist[i]<<endl;
    }
    cout<<endl;
    for(int i=0;i<path.size();i++){
        cout<<path[i]<< " ";
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

