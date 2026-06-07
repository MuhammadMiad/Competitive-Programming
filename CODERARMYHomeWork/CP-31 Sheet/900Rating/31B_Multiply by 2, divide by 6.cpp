#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  int t;cin>>t;while(t--){
       ll n;cin>>n;
       int cnt=0;
       int cn=0;
       while(n>1){
         cn++;
         if(n%6==0){
            n/=6;
            cnt=0;
         }
         else{
            n*=2;
            cnt++;
         }
        if(cnt>1)break;
       }
       if(n!=1)cout<<-1<<endl;
       else cout<<cn<<endl;


  }

return 0;
}
