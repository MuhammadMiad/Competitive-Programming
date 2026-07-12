#include<bits/stdc++.h>
using namespace std;

void BFS(int node, vector<int>arr[],int n){
           queue<int>q;
           q.push(node);
           vector<bool>visit(n+1,0);
           visit[node]=1;
           map<int,int>mp;
           mp[node]=0;
           while(!q.empty()){
                  int x=q.front();
                  q.pop();

              for(int i=0;i<arr[x].size();i++){
                  if(!visit[arr[x][i]]){
                    q.push(arr[x][i]);
                    visit[arr[x][i]]=1;
                    mp[arr[x][i]]=mp[x]+1;
                  }
              }

           }

//           for(int i=1;i<=n;i++){
//            if(mp[i]  || i==1)cout<<i<<" "<<mp[i]<<endl;
//            else cout<<i<<" "<<-1<<endl;
//           }

for(int i=1;i<=n;i++){
    if(mp.find(i) != mp.end())
        cout << i << " " << mp[i] << endl;
    else
        cout << i << " -1" << endl;
}


}
int main(){
    int n;cin>>n;
    vector<int>arr[n+1];
    for(int i=0;i<n;i++){
         int u,k;cin>>u>>k;
         while(k--){
                int x;
                cin>>x;
            arr[u].push_back(x);
         }
    }

    BFS(1,arr,n);




return 0;
}
