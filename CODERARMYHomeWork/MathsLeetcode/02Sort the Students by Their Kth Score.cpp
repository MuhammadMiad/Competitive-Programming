#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,k;
  cin>>n>>m>>k;
  vector<vector<int>>arr(n,vector<int>(m));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
  }
  map<int,vector<int>,greater<int>>mp;
  vector<vector<int>>result;

    for(auto &it:arr){
    mp.insert({it[k],it});
  }
  for(auto &it:mp){
   result.push_back(it.second);
  }

  cout<<endl;
  for(int i=0;i<result.size();i++){
    for(int j=0;j<m;j++){
       cout<<result[i][j]<<" ";

    }
    cout<<endl;
  }


return 0;
}
