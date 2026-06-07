#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
int visit[1000],in[1000],out[1000];
int t=1;
void DFS(int node){
visit[node]=1;
in[node]=t++;
for(int child:v[node]){
    if(visit[child]==0){
        DFS(child);
    }
}
out[node]=t++;
}
int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    DFS(1);

    for(int i=1;i<=n;i++){
        cout<<i<<" IN Time:"<<in[i]<<" Out Time:"<<out[i]<<endl;
    }

return 0;
}
