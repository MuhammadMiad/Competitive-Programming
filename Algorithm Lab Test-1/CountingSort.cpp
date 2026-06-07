#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={6,5,12,10,9,1};
int n=sizeof(arr)/sizeof(arr[0]);
int output[n];
int mx=INT_MIN;
for(int i=0;i<n;i++){
    if(mx<arr[i])mx=arr[i];
}
int cnt[mx+1];
for(int i=0;i<=mx;i++)cnt[i]=0;
for(int i=0;i<n;i++){
 cnt[arr[i]]++;
}
for(int i=1;i<=mx;i++){
    cnt[i]=cnt[i]+cnt[i-1];
}
for(int i=n-1;i>=0;i--){
    output[--cnt[arr[i]]]=arr[i];
}
for(int i=0;i<n;i++){
    cout<<output[i]<<" ";
}
cout<<endl;
return 0;
}

