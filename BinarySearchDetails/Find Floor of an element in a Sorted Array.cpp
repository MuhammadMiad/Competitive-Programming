#include<bits/stdc++.h>
using namespace std;

int FindFloorValue(int arr[],int n,int k){
  int l=0;
  int h=n-1;
  int res=0;
  if(arr[0]>k)return -1;
  while(l<=h){
    int mid=l+(h-l)/2;
    if(arr[mid]==k)return arr[mid];
    else if(arr[mid]<k){
        res=arr[mid];
        l=mid+1;
    }
    else if(arr[mid]>k)h=mid-1;
  }
  return res;
}
int main(){
int arr[]={1, 2, 8, 10, 10, 12, 19};
int k=100;
int n=sizeof(arr)/sizeof(arr[0]);
int ans=FindFloorValue(arr,n,k);
cout<<ans<<endl;
return 0;
}
