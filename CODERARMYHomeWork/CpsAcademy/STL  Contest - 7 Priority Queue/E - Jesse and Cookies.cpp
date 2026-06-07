#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  ll n,k;cin>>n>>k;
  priority_queue<ll,vector<ll>,greater<ll>>p;
  for(int i=0;i<n;i++){
      int x;
      cin>>x;
      p.push(x);
  }
  int cnt=0;
  while(p.top()<k){
    if(p.size()==1){
        p.pop();
        break;
    }
    int a=p.top();
    p.pop();
    int b=p.top();
    p.pop();
    p.push(a+b+b);
  }
  if(p.size()==0)cout<<-1<<endl;
  else{
    cnt=n-p.size();
    cout<<cnt<<endl;
  }


return 0;
}
