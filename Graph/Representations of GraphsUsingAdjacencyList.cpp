/**
                                 0-----2----5
                                / \    /|\ /
                               /   \  / | 1
                              /     4   |
                             3          6

                                                */

#include<bits/stdc++.h>
using namespace std;
int main(){
int vertex,edges;
cin>>vertex>>edges;
vector<int>adj[vertex];
while(edges--){
     int u,v;
     cin>>u>>v;
     adj[u].push_back(v);
     adj[v].push_back(u);
}
for(int i=0;i<vertex;i++){
    for(int j=0;j<adj[i].size();j++){
        cout<<adj[i][j]<<" ";
    }
    cout<<endl;
}


return 0;
}
