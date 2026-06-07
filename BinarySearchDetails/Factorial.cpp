#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
typedef unsigned long long int ll;
ll Fact(ll n){
  if(n==0||n==1)return 1;
  return((n%mod)*Fact(n-1))%mod;
}
int main(){

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
  cout<<Fact(n)<<endl;
}

return  0;
}
