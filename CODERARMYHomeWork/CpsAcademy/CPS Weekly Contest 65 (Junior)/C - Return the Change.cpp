#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
  int n;cin>>n;
  if(n%10==0){
    cout<<100-n<<endl;
  }
  else if(n%10<5)cout<<100-(n-(n%10))<<endl;
  else{
        int x=10-(n%10);
    cout<<100-(n+x)<<endl;
  }

 }

return 0;
}
