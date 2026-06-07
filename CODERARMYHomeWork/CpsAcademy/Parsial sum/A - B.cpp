#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;cin>>n>>x;
    vector<int>arr(n+1);
    for(int i=1;i<=n;i++)cin>>arr[i];

    for(int i=2;i<=n;i++)arr[i]+=arr[i-1];
    int mx=0;
    for(int k=0;k<=n;k++){
        int mn=0;
        for(int i=k;i<=n;i++){
            mn=min(mn,arr[i-k]);
            int subarr=arr[i]-mn;
           mx=max(mx,subarr+x*k);
        }
        cout<<mx<<" ";
    }
   cout<<endl;

}
int main(){
    int t;cin>>t;while(t--){
    solve();
    }



return 0;
}
