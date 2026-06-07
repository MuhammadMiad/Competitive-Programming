#include<bits/stdc++.h>
using namespace std;

int main()
{
    int vertex,edges;
    cin>>vertex>>edges;
    vector<vector<int>>adj(vertex,vector<int>(vertex));
    while(edges--)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
    }

    queue<int>q;
    vector<int>inDeg(vertex,0);
    vector<int>ans;

    for(int i=0;i<vertex;i++){
        for(int j=0;j<adj[i].size();j++){
            inDeg[adj[i][j]]++;
        }
    }

    for(int i=0;i<vertex;i++){
        if(inDeg[i]==0)q.push(i);
    }

    while(!q.empty())
    {
    int node=q.front();
    q.pop();
    ans.push_back(node);
    for(int i=0;i<adj[node].size();i++){
        inDeg[adj[node][i]]--;
        if(inDeg[adj[node][i]]==0)q.push(adj[node][i]);
    }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}


