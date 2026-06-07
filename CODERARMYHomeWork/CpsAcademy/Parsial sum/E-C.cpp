#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    vector<int>prefix(n),suffix(n);
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=__gcd(prefix[i-1],arr[i]);
    }
    suffix[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        suffix[i]=__gcd(suffix[i+1],arr[i]);
    }
    int mx=0;
    mx=max(suffix[1],prefix[n-2]);
    for(int i=1;i<n-1;i++){
        mx=max(mx,__gcd(prefix[i-1],suffix[i+1]));
    }
    cout<<mx<<endl;


return 0;
}
