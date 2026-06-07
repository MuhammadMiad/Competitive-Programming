/**
9 13
0 1 4
0 7 8
1 7 11
1 2 8
2 8 2
7 8 7
7 6 1
8 6 6
6 5 2
2 3 7
3 5 14
3 4 9
5 4 10
**/

#include<bits/stdc++.h>
using namespace std;
int main(){
int n,e;
cin>>n>>e;
vector<pair<int,int>>adj[n];
for(int i=0;i<e;i++){
    int u,v,w;
    cin>>u>>v>>w;
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));
}
priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>p;
vector<int>isMST(n,0);
vector<int>parent(n);

p.push({0,{0,-1}});
int cost=0;
while(!p.empty()){
    int wt=p.top().first;
    int node=p.top().second.first;
    int par=p.top().second.second;
    p.pop();

    if(isMST[node]==0){
        isMST[node]=1;
        cost+=wt;
        parent[node]=par;
        for(int i=0;i<adj[node].size();i++){
             int n=node;
             int nei=adj[node][i].first;
             int w=adj[node][i].second;
            if(isMST[nei]==0){
                p.push({w,{nei,n}});
            }
        }
    }
}

cout<<cost<<endl;

//for(int i=0;i<n;i++){
//        cout<<i<<"->";
//        for(int j=0;j<adj[i].size();j++){
//       cout<<adj[i][j].first<<" "<<adj[i][j].second<<" , ";
//        }
//        cout<<endl;
//
//}


return 0;
}
