#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
            ll n,x,y;cin>>n>>x>>y;
            vector<ll>arr(n),brr(n);
            ll sum=0,mx=0;
            for(int i=0;i<n;i++)cin>>arr[i],brr[i]=(arr[i]/x)*y,sum+=brr[i],mx=max(mx,arr[i]-brr[i]);

            cout<<sum+mx<<endl;

}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}

