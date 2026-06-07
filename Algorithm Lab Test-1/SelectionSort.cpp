#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={6,5,12,10,9,1};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
    int mn=i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[mn]){
        mn=j;
      }
    }
    swap(arr[i],arr[mn]);
}
for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
cout<<endl;


return 0;
}

