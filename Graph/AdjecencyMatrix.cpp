#include<bits/stdc++.h>
using namespace std;
int main(){
int n,e;
cin>>n>>e;
int adjacency[n+1][n+1];
memset(adjacency,0,sizeof(adjacency));
while(e--){
    int x,y;
    cin>>x>>y;
    adjacency[x][y]=1;
    adjacency[y][x]=1;
}
for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){
        cout<<adjacency[i][j]<< " ";
    }
    cout<<endl;
}

for(int i=0;i<=n;i++){
        cout<<i<<"  neighobs->";
    for(int j=0;j<=n;j++){
      if(adjacency[i][j]==1)cout<<j<<"->";
    }
    cout<<endl;
}

return 0;
}

