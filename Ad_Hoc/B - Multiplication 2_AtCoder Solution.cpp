#include<bits/stdc++.h>
using namespace std;
const long long int p=1e18;
typedef long long int ll;

int main(){
ll n;
cin>>n;
ll arr[n];
int x=0;
for(ll i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==0)x=1;
}
ll ans=1;
if(x==1)cout<<"0"<<endl;
else{
   for(ll i=0;i<n;i++){
    if(ans<=p/arr[i]){
        ans=ans*arr[i];
    }
    else{
        ans=-1;
        break;
    }
   }
   cout<<ans<<endl;

}


return 0;
}
