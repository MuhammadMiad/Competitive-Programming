#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define N 200000
ll arr[N+7];
int main(){
   arr[1]=1;
 for(int i=2;i<=N+7;i++){
   arr[i]=arr[i-1]+i;
 }
 int t;cin>>t;
 while(t--){
    ll n,k,T;cin>>n>>k>>T;
    vector<ll>brr(n+1);
    brr[n]=200000000000;
    for(int i=0;i<n;i++)cin>>brr[i];

    ll cnt=0;
    ll ans=0;
    for(int i=0;i<=n;i++){
        if(brr[i]<=T)cnt++;
        else{
            if(cnt>=k)ans+=arr[cnt-k+1];
            cnt=0;
        }
    }
    cout<<ans<<endl;

 }
return 0;
}
