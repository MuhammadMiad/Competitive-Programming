#include<bits/stdc++.h>
using namespace std;
void DFS(int node,vector<vector<int>>&adj,vector<bool>&visited,stack<int>&st)
{
    visited[node]=1;
    for(int i=0; i<adj[node].size(); i++)
    {
        if(!visited[adj[node][i]])
        {
            DFS(adj[node][i],adj,visited,st);
        }
    }
    st.push(node);
}
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

    vector<bool>visited(vertex,0);
    stack<int>st;
    for(int i=0;i<vertex;i++){
        if(!visited[i])
       DFS(i,adj,visited,st);
    }

    while(!st.empty())
    {
        cout<<st.top()<< " ";
        st.pop();
    }
    cout<<endl;
    return 0;
}

