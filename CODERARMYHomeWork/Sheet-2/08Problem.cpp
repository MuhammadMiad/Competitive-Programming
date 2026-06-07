#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int co=0;
  for(int i=2;i<n;i++){
    if(n%i==0)co++;
  }
  if(co==0)
  cout<<"YES"<<endl;
  else cout<<"NO"<<endl;


return 0;
}
