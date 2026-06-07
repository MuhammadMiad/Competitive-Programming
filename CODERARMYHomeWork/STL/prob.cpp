#include<bits/stdc++.h>
using namespace std;
int valid(int i,int j,int n,int m){
 return i>=0&&j>=0&&i<n&&j<m;
}
int row[]={-1,1,0,0};
int col[]={0,0,-1,1};
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>mat(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>mat[i][j];
            }
        }
        if(n==1 and m==1)cout<<mat[0][0]-1<<endl;
        else {
             int x,y;
             x=n/2;
             y=m/2;
             mat[x][y]=mat[x][y]-1;
             for(int k=0;k<4;k++){
                if(valid(x+row[k],y+col[k],n,m)){
                    mat[x+row[k]][y+col[k]]-=1;
                }
             }

//             mat[x+1][y]-=1;
//             mat[x][y-1]-=1;
//             mat[x][y+1]-=1;

             map<int,int>mp;
             for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    mp[mat[i][j]]++;
                }
             }
             int mx=INT_MIN,store;
             for(auto it:mp){
                if(mx<it.second){
                    mx=it.second;
                    store=it.first;
                }
             }
             cout<<store<<endl;
        }

    }


return 0;
}
