#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;cin>>t;while(t--){
  int n,r,b;cin>>n>>r>>b;
  int total=r/2;
  if(b==1)total=r/2;
  else if(r%b==0)total=b+1;
  else if(b<r/b)total=r/(b+1);
  else total=r/b;
  string str="";
  while(b--){
    for(int i=0;i<total;i++)str+='R';
    str+='B';
    r-=total;
  }

  while(r--){
    str+='R';
  }
  cout<<str<<endl;
  }


return 0;
}
