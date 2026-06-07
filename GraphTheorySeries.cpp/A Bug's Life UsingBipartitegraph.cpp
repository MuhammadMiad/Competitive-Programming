#include<bits/stdc++.h>
using  namespace std;
vector<int>v[1000];
int visit[1000],col[1000],i=1;
bool  DFS(int node,int c){
visit[node]=1;
col[node]=c;
for(int child:v[node]){
    if(visit[child]==0){
        DFS(child,c^1);
    }
    else{
        if(col[child]==col[node])return false;
    }
}
return true;

}
int main(){
int t;
cin>>t;
while(t--){
    int n,e;
    cin>>n>>e;
    while(e--){
          int x,y;
          cin>>x>>y;
          v[x].push_back(y);
          v[y].push_back(x);
          }
          bool ans= DFS(1,0);
          if(ans==false){
            cout<<"Scenario #"<<i++<<":"<<endl;
            cout<<"Suspicious bugs found!"<<endl;
          }
        else{
            cout<<"Scenario #"<<i++<<":"<<endl;
            cout<<"No suspicious bugs found!"<<endl;
          }
         for(int i=1;i<=n;i++)v[i].clear();

}
return 0;
}
