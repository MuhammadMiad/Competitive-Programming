#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={5,1,1,1,1,1,12,7,2,6};
int n=sizeof(arr)/sizeof(arr[0]);
int mx=INT_MIN;
for(int i=0;i<n;i++){
    if(mx<arr[i])mx=arr[i];
}

int count[mx+1];
int output[n];
for(int i=0;i<=mx;i++)count[i]=0;
for(int i=0;i<n;i++){
    count[arr[i]]++;
}
for(int i=1;i<=mx;i++){
  count[i]=count[i-1]+count[i];
}
for(int i=n-1;i>=0;i--){
    output[--count[arr[i]]]=arr[i];
}
for(int i=0;i<n;i++)cout<<output[i]<<" ";
    cout<<endl;
return 0;
}
