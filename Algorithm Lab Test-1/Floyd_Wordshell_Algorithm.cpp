/**
5 9
1 2 3
1 3 8
1 5 -4
2 5 7
2 4 1
3 2 4
4 3 -5
4 1 2
5 4 6
**/

#include<bits/stdc++.h>
using namespace std;
int main(){
int n,e;
cin>>n>>e;
vector<vector<int>>Mat(n+1,vector<int>(n+1,1e9));
while(e--){
    int u,v,w;
    cin>>u>>v>>w;
    Mat[u][v]=w;
}
for(int i=1;i<=n;i++)Mat[i][i]=0;
for(int k=1;k<=n;k++){
        for(int i=1;i<=n;i++){
          for(int j=1;j<=n;j++){
                if(Mat[i][k]==1e9 || Mat[k][j]==1e9)continue;
                Mat[i][j]=min(Mat[i][j],Mat[i][k]+Mat[k][j]);
          }
        }
}

for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(Mat[i][j]==1e9)Mat[i][j]=-1;
        }
}

for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           if(Mat[i][j]<0)
           cout<<Mat[i][j]<<"  ";
           else cout<<Mat[i][j]<<"   ";
        }
        cout<<endl;
}
return 0;
}
