#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
   int n,m;cin>>n>>m;
    vector<ll>arr(n+1,0),brr;
    for(int i=1;i<=n;i++)cin>>arr[i];
    brr=arr;
    for(int i=1;i<=n;i++){
        brr[i]*=i;
    }

    for(int i=1;i<=n;i++){
        arr[i]+=arr[i-1];
        brr[i]+=brr[i-1];
    }
    ll mx=LLONG_MIN;
    for(int i=1;i<=n-m+1;i++){
        mx=max(mx,((brr[i+m-1]-brr[i-1])-(arr[i+m-1]-arr[i-1])*(i-1)));
    }

    cout<<mx<<endl;

return 0;
}
