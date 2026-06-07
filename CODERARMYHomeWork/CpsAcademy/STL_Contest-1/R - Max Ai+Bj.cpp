
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
   int n;
   cin>>n;
   ll sum=0;
   for(int i=0;i<2;i++){
        ll x;
        ll mx=-1e9;
     for(int j=0;j<n;j++){
        cin>>x;
       mx=max(mx,x);
     }
     sum+=mx;
   }
   cout<<sum<<endl;

return 0;
}
