#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int ans=0;
  for(int i=1;i<=n;i++){
     int a=n-i;
 if( i>(n/2)){
        break;
     }
else if(a%i==0&&a>0){

        ans++;
     }


  }
cout<<ans<<endl;

return 0;
}
