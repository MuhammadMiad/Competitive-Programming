#include<bits/stdc++.h>
using namespace std;
bool DFS(int node, vector<int>arr[],vector<int>&ans, int n){
     queue<int>q;
     q.push(node);
     vector<int>visit(n+1,0);
     map<int,int>mp;
     visit[node]=1;

     while(!q.empty()){
         int a=q.front();
         q.pop();

         if(a==n){
                ans.push_back(a);
            while(1){
                    int x=mp[ans.back()];
                    if(x==1){
                        ans.push_back(x);
                        break;
                    }
                    ans.push_back(x);
            }
            return true;
         }

         for(int i=0;i<arr[a].size();i++){
             if(!visit[arr[a][i]]){
                q.push(arr[a][i]);
                mp[arr[a][i]]=a;
                visit[arr[a][i]]=1;
             }
         }

     }


return false;

}
int main(){
 int n,m;cin>>n>>m;
 vector<int>arr[n+1];
 for(int i=1;i<=m;i++){
       int x,y;
       cin>>x>>y;
       arr[x].push_back(y);
       arr[y].push_back(x);
 }

 vector<int>ans;

 if(DFS(1,arr,ans,n)){
    cout<<ans.size()<<endl;
    while(ans.size()>0){
        cout<<ans.back()<<" ";
        ans.pop_back();
    }
    cout<<endl;
 }
 else cout<<"IMPOSSIBLE"<<endl;




return 0;
}
