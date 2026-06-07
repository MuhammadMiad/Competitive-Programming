#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,k;cin>>n>>k;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    int i=0,j=0;
    ll ans=0,sum=0;
    while(j<n){
        sum+=arr[j++];
        while(sum>k and i<j){
            sum-=arr[i];
            i++;
        }
        if(sum==k)ans++;
    }

    cout<<ans<<endl;
    return 0;
}