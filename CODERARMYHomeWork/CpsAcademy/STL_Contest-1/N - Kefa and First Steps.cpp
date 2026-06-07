#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    int cnt=1;
    int mx=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1])cnt++;
        else cnt=1;
        mx=max(mx,cnt);
    }
    cout<<mx<<endl;

return 0;
}
