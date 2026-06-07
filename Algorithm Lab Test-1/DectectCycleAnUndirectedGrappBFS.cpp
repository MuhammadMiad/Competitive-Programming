/*
9 9
0 1
1 2
2 3
3 7
7 8
3 4
4 5
5 2
4 6
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
int n,e;
cin>>n>>e;
vector<int>adj[n];
while(e--){
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    //adj[v].push_back(u);
}
vector<bool>visit(n,0);
queue<pair<int,int>>q;
q.push({0,-1});
visit[0]=1;
while(!q.empty()){
    int node=q.front().first;
    int parent=q.front().second;
    q.pop();
    for(int i=0;i<adj[node].size();i++){
        if(adj[node][i]==parent)continue;
        if(visit[adj[node][i]]){
            cout<<"Cycle Present."<<endl;
            return 0;
        }
        q.push({adj[node][i],node});
        visit[adj[node][i]]=1;
    }
}
cout<<"Cycle Not Present."<<endl;
return 0;
}
