#include<bits/stdc++.h>
using namespace std;
void  BFS(int node, vector<int>arr[],map<int,int>&mp,int n){
             queue<int>q;
             q.push(node);
             vector<int>visit(n,0);
             visit[node]=1;
             mp[node]=0;

             while(!q.empty()){
                 int a=q.front();
                 q.pop();
                 for(int i=0;i<arr[a].size();i++){
                    if(!visit[arr[a][i]]){
                        q.push(arr[a][i]);
                        visit[arr[a][i]]=1;
                        mp[arr[a][i]]=mp[a]+1;
                    }
                 }

             }

}
void solve(int t){
         int n,r;cin>>n>>r;
         vector<int>arr[n];
         for(int i=0;i<r;i++){
            int x,y;
            cin>>x>>y;
            arr[x].push_back(y);
            arr[y].push_back(x);
         }

        int s,d;cin>>s>>d;
        map<int,int>mp;
        BFS(s,arr,mp,n);
        map<int,int>mp1;
        BFS(d,arr,mp1,n);
        cout<<"Case "<<t<<": ";
        int mx=0;
        for(int i=0;i<n;i++){
            mx=max(mx,mp[i]+mp1[i]);
        }

       cout<<mx<<endl;



}
int main(){
    int  t;cin>>t;
   for(int i=1;i<=t;i++)solve(i);



return 0;
}
