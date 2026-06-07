#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000];
int visit[1000],dis[1000];
void dfs(int node,int d){
 visit[node]=1;
 dis[node]=d;
 for(int  child:v[node]){
    if(visit[child]==0){
        dfs(child,d+1);
    }
 }

}

int main(){
int  n,e;
cin>>n;
e=n-1;
while(e--){
    int x,y;
    cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
}

dfs(1,0);

int q;
cin>>q;
 int mn=INT_MAX;
 int ans=-1;
while(q--){
    int a;
    cin>>a;
    if(mn>dis[a]){
         mn=dis[a]; ans=a;
    }
    else if(mn==dis[a]) ans=min(a,ans);
}
cout<<ans<<endl;

return 0;
}
