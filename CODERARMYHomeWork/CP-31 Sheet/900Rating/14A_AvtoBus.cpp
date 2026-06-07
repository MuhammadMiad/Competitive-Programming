#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
     if(n<4 || n%2){
         cout<<-1<<endl;
         continue;
     }
     ll ans=n/6;
     ll ans2=n/4;
     if(n%6!=0){
        cout<<ans+1<<" "<<ans2<<endl;
     }
     else cout<<ans<<" "<<ans2<<endl;


    }

return 0;
}
