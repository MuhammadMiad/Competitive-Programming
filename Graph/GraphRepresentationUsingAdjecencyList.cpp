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
vector<int>adjList[v];
int x,y;
while(e--){
 cin>>x>>y;
 adjList[x].push_back(y);
 adjList[y].push_back(x);
}

cout<<"Graph Display:"<<endl;
for(int i=0;i<v;i++){
     cout<<i<<"->";
    for(int j=0;j<adjList[i].size();j++){
        cout<<adjList[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}

