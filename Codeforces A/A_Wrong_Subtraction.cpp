#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,x;
    cin>>n>>k;

  for(int i=0;i<k;i++){
    x=n%10;
    if(x>0) {
    n-=1;
   }
  else if(x==0)
  {
      n/=10;
  }
  }
  cout<<n<<endl;


return 0;
}
