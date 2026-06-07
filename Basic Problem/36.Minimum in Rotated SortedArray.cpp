#include<bits/stdc++.h>
using namespace std;
int MinValRotate(int arr[],int n){
  int low=0;
  int high=n-1;
  int ans=0;
  if(arr[0]<=arr[n-1])return arr[0];
   while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[0]<=arr[mid])low=mid+1;
    else{
        ans=arr[mid];
        high=mid-1;
    }
   }
   return ans;
}
int main(){
int arr[]={8,12,15,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"Minimum in Rotated Sorted Array:"<<MinValRotate(arr,n)<<endl;
return 0;
}
