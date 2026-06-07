#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
int visit[1000];
void DFS(int node){
visit[node]=1;
cout<<node<<"->";
for(int i=0;i<v[node].size();i++){

  int child=v[node][i];
    if(visit[child]==0){
        DFS(child);
    }
}

}
int main(){
    int n,e;
    cin>>n>>e;
    int x,y;
    while(e--){
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    DFS(1);

return 0;
}
