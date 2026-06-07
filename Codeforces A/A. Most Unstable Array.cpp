#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
  int n,m;
  cin>>n>>m;
  if(n==1) v.push_back(0);
  else if(n==2)v.push_back(m);
  else v.push_back(m*2);

  }
for(auto it:v){
    cout<<it<<endl;
}
return 0;
}
