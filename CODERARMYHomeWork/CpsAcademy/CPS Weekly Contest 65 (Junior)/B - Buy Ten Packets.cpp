#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
     double x,y;
     cin>>x>>y;

     double first=x/2;
     double second=y/4;
     if(first<=second){
        int ans=5*x;
        cout<<ans<<endl;
     }
     else{
        int ans=y*2;
        ans+=x;
        cout<<ans<<endl;
     }



 }

return 0;
}
