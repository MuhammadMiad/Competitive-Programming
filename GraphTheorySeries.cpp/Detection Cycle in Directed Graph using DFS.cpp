#include<bits/stdc++.h>
using namespace std;
vector<int>v[100];
int  visit[100];
bool  DFS(int node){
visit[node]=1;
for(int child:v[node]){
    if(visit[node]==0){
       if(DFS(child)==true)return true;
    }
    else{
        if(visit[child]==1)return true;
    }

}
visit[node]=2;
return false;


}
int main(){
int n,e;
cin>>n>>e;
while(e--){
    int x,y;
    cin>>x>>y;
        v[x].push_back(y);
        }
     bool ans=DFS(1);
     if(ans==true) cout<<"Cycle Found."<<endl;
     else cout<<"No Cycle Found."<<endl;

return 0;
}
