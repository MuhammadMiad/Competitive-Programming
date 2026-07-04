#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
        ll n,q;cin>>n>>q;
        vector<ll>arr(n),brr(n);
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<n;i++)cin>>brr[i];

        for(int i=0;i<n;i++)arr[i]=max(arr[i],brr[i]);
        ll mx=arr[n-1];
        for(int i=n-2;i>=0;i--){
            mx=max(mx,arr[i]);
            arr[i]=mx;
        }



        for(int i=1;i<n;i++)arr[i]+=arr[i-1];


        while(q--){
                int x,y;cin>>x>>y;
                  x-=2,y--;
            if(x>=0){
                cout<<arr[y]-arr[x]<<endl;
            }
            else cout<<arr[y]<<endl;
        }

}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}

