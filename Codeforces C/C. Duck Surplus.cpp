#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
            ll n;cin>>n;
            vector<ll>arr(n);
            for(int i=0;i<n;i++)cin>>arr[i];
            for(int i=0;i<n-1;i++){
                if(arr[i]>arr[i+1]){
                    ll store=arr[i+1];
                    arr[i+1]+=arr[i];
                    arr[i]=store;
                }
            }
         ll mx=0;
         for(int i=0;i<n;i++){
            mx=max(mx,arr[i]);
         }

         cout<<mx<<endl;
}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}

