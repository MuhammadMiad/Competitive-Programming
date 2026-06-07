#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
 int t;
 cin>>t;
 while(t--){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++)cin>>arr[i];
    vector<ll>brr(n);
    brr[0]=arr[0];
    for(int i=1;i<n;i++){
        brr[i]=max(brr[i-1],arr[i]);
    }

    ll sum=0;
    ll temp;
    for(int i=n-1;i>0;i--){
        temp=max(brr[i-1],arr[i]);
        cout<<sum+temp<<" ";
        sum+=arr[i];
    }
    cout<<sum+brr[0];
    cout<<endl;

 }


return 0;
}
