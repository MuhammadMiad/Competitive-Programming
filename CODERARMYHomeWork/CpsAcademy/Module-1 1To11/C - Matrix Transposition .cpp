#include<bits/stdc++.h>
using namespace std;
int main(){
  int h,w;cin>>h>>w;
  vector<vector<int>>ans(w,vector<int>(h,0));

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
        cin>>ans[j][i];
    }
  }

  for(int i=0;i<w;i++){
    for(int j=0;j<h;j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }

return 0;
}
