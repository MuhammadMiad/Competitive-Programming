#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
int visit[1000];
void DFS(int node){
visit[node]=1;
for(auto it:v[node]){
    if(visit[it]==0){
        DFS(it);
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
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(visit[i]==0){
            cnt++;
            DFS(i);
        }
    }
    cout<<cnt<<endl;


return 0;
}
