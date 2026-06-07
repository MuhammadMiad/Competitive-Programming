#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    ll sum=0;
    ll mx=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        mx=max(mx,sum);
        if(sum<0)sum=0;
    }

    cout<<mx<<endl;

return 0;

}
