#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;while(t--){
     double n,m;cin>>n>>m;
     n=n-(10*n)/100;
     if(n>m)cout<<"DINING"<<endl;
     else if(n<m)cout<<"ONLINE"<<endl;
     else  cout<<"EITHER"<<endl;

  }


return 0;
}

