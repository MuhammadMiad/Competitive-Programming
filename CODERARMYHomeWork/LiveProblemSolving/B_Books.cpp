#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,m;cin>>n>>m;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }   
    ll i=0,j=0;
    ll mx=0,sum=0;
    while(j<n){
        if(sum<=m)sum+=arr[j];

        while(sum>m){
          sum-=arr[i];
          i++;
        }
        mx=max(mx,j-i+1);
       // cout<<i<<" "<<j<<endl;
        //cout<<sum<<endl;
       // cout<<mx<<endl;
        j++; 
    }
    cout<<mx<<endl;

    return 0;
}