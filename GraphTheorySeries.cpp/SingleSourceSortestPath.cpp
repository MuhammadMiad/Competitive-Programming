//Only  executed on tree.
#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
int visit[1000],dis[1000];
void DFS(int node, int d){
visit[node]=1;
dis[node]=d;
for(int child:v[node]){
    if(visit[child]==0){
        DFS(child,d+1);
    }
}
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
int x;
cin>>x;
DFS(x,0);

for(int i=1;i<=n;i++){
    cout<<x<<" -> "<<i<<" = "<<dis[i]<<endl;
}
return 0;
}
