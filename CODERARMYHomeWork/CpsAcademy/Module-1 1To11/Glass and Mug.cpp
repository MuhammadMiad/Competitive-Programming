#include<bits/stdc++.h>
using namespace std;
int main(){
  int k,g,m;cin>>k>>g>>m;
  int temp1=0,temp2=0;
  for(int i=0;i<k;i++){
    if(temp1==g){
        temp1=0;
    }
    else if(temp2==0){
        temp2=m;
    }
    else{
      if(g-temp1<temp2){
        int store=g-temp1;
        temp1+=store;
        temp2-=store;
      }
      else{
      temp1+=temp2;
      temp2=0;
      }

    }

   // cout<<temp1<<" "<<temp2<<endl;

  }

  cout<<temp1<<" "<<temp2<<endl;

return 0;
}
