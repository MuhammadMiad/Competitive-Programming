/**
  0----1----2
  |   /     |
  |  /      |
  | /       |
  3---------4
 5 6 0 1  0 3  1 2 1 3 2 4 3 4

                      **/
#include<bits/stdc++.h>
using namespace std;
int main(){
int v,e;
cin>>v>>e;
vector<vector<bool>>adjMat(v,vector<bool>(v,0));
int x,y;
while(e--){
 cin>>x>>y;
 adjMat[x][y]=1;
 adjMat[y][x]=1;
}

cout<<"Graph Display:"<<endl;
for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
        cout<<adjMat[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}
