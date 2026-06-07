/**
5 6
0 2 5
0 1 3
1 3 1
2 3 -3
2 4 2
3 4 -2
**/


#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,e;
    cin>>n>>e;
    vector<vector<int>>adj;
    int cnt=e;
    while(cnt--){
        int u,v,w;
        cin>>u>>v>>w;
        vector<int>edge(3);
        edge[0]=u;
        edge[1]=v;
        edge[2]=w;
        adj.push_back(edge);
    }
    vector<int>disit(n,1e8);
    disit[0]=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<e; j++)
        {
            int u=adj[j][0];
            int v=adj[j][1];
            int w=adj[j][2];
            if(disit[u]==1e8)continue;
            if(disit[u]+w<disit[v])
                disit[v]=disit[u]+w;
        }
    }
    for(int i=0; i<e; i++)
    {
        int u=adj[i][0];
        int v=adj[i][1];
        int w=adj[i][2];
        if(disit[u]==1e8)continue;
        if(disit[u]+w<disit[v])
        {
            cout<<"Negative Cycle Present."<<endl;
            return 0;
        }
    }

    for(int i=0; i<disit.size(); i++)
    {
        cout<<disit[i]<<" ";
    }
    cout<<endl;

    return 0;
}
