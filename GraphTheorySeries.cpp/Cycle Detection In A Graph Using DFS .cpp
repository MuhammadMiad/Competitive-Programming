#include<bits/stdc++.h>
using namespace std;
vector<int>v[100];
int visit[100];
bool  DFS(int node,int parent){
visit[node]=1;
for(int child:v[node]){
    if(visit[child]==0){
        DFS(child,node);
    }
    else{
        if(node!=parent)return true;
    }
} return false;
}
int main(){
int  n,e;
cin>>n>>e;
while(e--){
    int x,y;
    cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
}
bool ans=DFS(1,-1);
if(ans==true)cout<<"Cycle"<<endl;
else cout<<"NO Cycle"<<endl;



return 0;
}
