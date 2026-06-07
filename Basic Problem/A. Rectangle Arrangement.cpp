#include<bits/stdc++.h>
using namespace std;
void solve(){
 vector<pair<int,int>>v;
   int n;
   cin>>n;
  while(n--){
    int x,y;
    cin>>x>>y;
    v.push_back(make_pair(x,y));
  }
   int m,p;
   int sum=0;
  for(int i=0;i<v.size()-1;i++){
    sum+=v[i].first+v[i+1].second;
  }
  cout<<sum<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
     solve();
    }


return 0;
}
