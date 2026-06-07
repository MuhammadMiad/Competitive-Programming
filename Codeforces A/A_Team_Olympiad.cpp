#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>v(n);
vector<pair<int,int>>count1;
vector<pair<int,int>>count2;
vector<pair<int,int>>count3;
for(int i=0;i<n;i++){
    cin>>v[i];
}

for(int i=0;i<v.size();i++){
  if(v[i]==1){
    count1.push_back({i+1,1});
  }
  else if(v[i]==2){
    count2.push_back({i+1,2});
  }
  else if(v[i]==3){
    count3.push_back({i+1,3});
  }
}
  int ans=min(count1.size(),min(count2.size(),count3.size()));
  cout<<ans<<endl;
  for(int i=0;i<ans;i++){
    cout<<count1[i].first<< " "<<count2[i].first<<" "<<count3[i].first<<endl;
  }



return 0;
}
