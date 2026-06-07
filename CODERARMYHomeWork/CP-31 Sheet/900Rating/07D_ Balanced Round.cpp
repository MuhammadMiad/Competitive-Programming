#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];

        sort(begin(arr),end(arr));
        int cnt=0,mx=0;
        for(int i=0;i<n-1;i++){
             if(abs(arr[i+1]-arr[i])<=k){
                cnt++;
             }
             else if(abs(arr[i+1]-arr[i])>k){
                mx=max(cnt,mx);
                cnt=0;
             }

        }
        mx=max(mx,cnt);
        cout<<n-(mx+1)<<endl;

    }

return 0;
}
