#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
int visit[1000],color[1000];
bool DFS(int node ,int c){
visit[node]=1;
color[node]=c;
for(int i=0;i<v[node].size();i++){
    int child=v[node][i];
    cout<<child<<endl;
    if(visit[child]==0){
        if (DFS(child , c^1)== false) return false;
    }
    else{
        if(color[node]==color[child]) return false;
    }

}
return true;

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
bool ans= DFS(1,1);
if(ans==true) cout<<"Graph is Bipartite"<<endl;
else cout<<"Graph is Not Bipartite"<<endl;



return 0;
}
