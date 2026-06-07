#include<bits/stdc++.h>
using namespace std;
int main(){
int n,e;
cin>>n>>e;
vector<pair<int,int>>adj[n];
while(e--){
    int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back({v,w});
}
vector<int>disit(n,1e8);
disit[0]=0;
for(int i=0;i<n-1;i++){
    for(int j=0;j<n;j++){
        for(int k=0;k<adj[j].size();k++){
            int v=adj[j][k].first;
            int w=adj[j][k].second;
            if(disit[j]==1e8)continue;
            if(disit[j]+w<disit[v]){
                disit[v]=disit[j]+w;
            }
        }
    }
}
for(int j=0;j<n;j++){
        for(int k=0;k<adj[j].size();k++){
            int v=adj[j][k].first;
            int w=adj[j][k].second;
            if(disit[j]==1e8)continue;
            if(disit[j]+w<disit[v]){
                cout<<"Negative Cycle Present."<<endl;
                return 0;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<disit[i]<<" ";
    }
    cout<<endl;

return 0;
}
