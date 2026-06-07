#include<bits/stdc++.h>
using namespace std;
int main(){
 int v,e;
 cin>>v>>e;
 vector<pair<int,int>>Adjlist[5];
 while(e--){
    int x,y,weight;
    cin>>x>>y>>weight;

    Adjlist[x].push_back(make_pair(y,weight));
    Adjlist[y].push_back(make_pair(x,weight));
 }
  for(int i=0;i<5;i++){
    for(int j=0;j<Adjlist[i].size();j++){
        cout<<"{ "<<Adjlist[i][j].first<<" , "<<Adjlist[i][j].second<<" }"<< " ";
    }
    cout<<endl;
  }
 return 0;
}

