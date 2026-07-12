#include<bits/stdc++.h>
using namespace std;
bool isValid(int x,int y,int n,int m){
    if(x<1 || y<1 || x>n || y>m)return false;
    return true;

}
bool BFS(int x,int y, vector<vector<char>>&arr,vector<vector<char>>&brr,vector<vector<bool>>&visit,vector<char>&ans){
             queue<pair<int,int>>q;
             q.push({x,y});
             visit[x][y]=1;

             while(!q.empty()){
                    int a=q.front().first;
                    int b=q.front().second;
                    q.pop();

                    if(arr[a][b]=='B'){
                        while(1){
                         ans.push_back(brr[a][b]);

                         if(ans.back()=='L')b++;
                         if(ans.back()=='R')b--;
                         if(ans.back()=='U')a++;
                         if(ans.back()=='D')a--;


                         if(arr[a][b]=='A')break;

                        }
                        return true;
                    }


                ///For left
                if(isValid(a,b-1,arr.size()-1,arr[0].size()-1) and arr[a][b-1]!='#' and !visit[a][b-1]){
                        visit[a][b-1]=1;
                        brr[a][b-1]='L';
                        q.push({a,b-1});
                }
                ///For Right
                 if(isValid(a,b+1,arr.size()-1,arr[0].size()-1) and arr[a][b+1]!='#' and !visit[a][b+1]){
                        visit[a][b+1]=1;
                        brr[a][b+1]='R';
                        q.push({a,b+1});
                }
                ///For Up
                 if(isValid(a-1,b,arr.size()-1,arr[0].size()-1) and arr[a-1][b]!='#' and !visit[a-1][b]){
                        visit[a-1][b]=1;
                        brr[a-1][b]='U';
                        q.push({a-1,b});
                }
                ///For Down
                 if(isValid(a+1,b,arr.size()-1,arr[0].size()-1) and arr[a+1][b]!='#' and !visit[a+1][b]){
                        visit[a+1][b]=1;
                        brr[a+1][b]='D';
                        q.push({a+1,b});
                }



             }

        return false;
}
int main(){
         int n,m;cin>>n>>m;
         vector<vector<char>>arr(n+1,vector<char>(m+1));
         vector<vector<char>>brr(n+1,vector<char>(m+1));
         vector<vector<bool>>visit(n+1,vector<bool>(m+1,0));
         vector<char>ans;
         int x,y;
         for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>arr[i][j];
                if(arr[i][j]=='A')x=i,y=j;
            }
         }

       if(BFS(x,y,arr,brr,visit,ans)){
          cout<<"YES"<<endl;
          cout<<ans.size()<<endl;
          while(ans.size()>0){
            cout<<ans.back();
            ans.pop_back();
          }
          cout<<endl;
       }
       else cout<<"NO"<<endl;

return 0;
}
