#include<bits/stdc++.h>
using  namespace std;

int main(){
    int n,e;
    cin>>n>>e;
    int mat[n][n];

      for(int i=0;i<n;i++)
      for(int j=0;j<n;j++){
            if(i==j){
                mat[i][j]=0;
            }
            else{
                 mat[i][j]=INT_MAX;
            }
        }

    for(int i=0;i<e;i++){
        int u,v,w;
        cin>>u>>v>>w;
            mat[u][v]=w;
        }


   for(int k=0;k<n;k++)
    for(int i=0;i<n;i++)
   for(int j=0;j<n;j++){
     if(mat[i][k]==INT_MAX || mat[k][j]==INT_MAX)continue;
     mat[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
   }


    for(int i=0;i<n;i++)
      for(int j=0;j<n;j++){
            if(mat[i][j]==INT_MAX){
                mat[i][j]=-1;
            }
      }


    cout<<endl<<endl;
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
          cout<<mat[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}
