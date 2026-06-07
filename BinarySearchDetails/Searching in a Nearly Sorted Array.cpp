#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int l,int h,int k){
  if(l<=h){
    int mid=l+(h-l)/2;
    if(arr[mid]==k)return mid;
    if(l<=mid-1&&arr[mid-1]==k)return mid-1;
    if(mid+1<=h&&arr[mid+1]==k)return mid+1;
    if(arr[mid]>k)return BinarySearch(arr,l,mid-2,k);
    else return BinarySearch(arr,mid+2,h,k);

  }
  return -1;

}
int main(){
int arr[]={10, 3, 40, 20, 50, 80, 70};
int k=50;
int n=sizeof(arr)/sizeof(arr[0]);
int ans=BinarySearch(arr,0,n-1,k);
cout<<"Nearly  Sorted array: "<<ans<<endl;
return 0;
}
