#include<bits/stdc++.h>
using namespace std;
long long solve(long long n){
    long long ans=0;
  while(1){
    long long  div=n/3;
    long long rem=n%3;
    ans+=div;
    div+=rem;
    if(div>=3){

        n=div;
    }
    else break;
  }

return  ans;
}
int main(){
  long long t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    long long ans=solve(n);
    cout<<ans<<endl;
  }



return 0;
}
