#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,l,r;cin>>n>>l>>r;
 vector<int>arr(n);
 for(int i=0;i<n;i++)cin>>arr[i];

 for(int i=0;i<n;i++){
    if(arr[i]<l)cout<<l<<" ";
    else if(arr[i]>=l and arr[i]<=r)cout<<arr[i]<<" ";
    else cout<<r<<" ";
 }


}
