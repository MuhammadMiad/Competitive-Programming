#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
map<int,int>mp;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    mp[x]++;
}
for(int i=0;i<m;i++){
  int x;
  cin>>x;
 auto it=mp.lower_bound(x);
 if(it==mp.begin()){
    cout<<-1<<endl;

 }
 else{
    it--;
    cout<<it->first<<endl;
    mp.erase(it);
 }
}


return 0;
}
