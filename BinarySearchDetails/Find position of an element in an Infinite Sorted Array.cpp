#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int n,int key){
int l=0;
int r=1;
while(key>arr[r]){
    l=r;
  r=r*2;
}
while(l<=r){
    int mid=l+(r-l)/2;
    if(arr[mid]==key)return mid;
    else if(arr[mid]>key)r=mid-1;
    else if(arr[mid]<key)l=mid+1;
}
return -1;
}

int main(){
    int arr[]={3,5,7,9,10,90,100,130,140,160,170};
    int key=170;
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=BinarySearch(arr,n,key);
    cout<<"Index of an element in an infinite Sorted Array:"<<ans<<endl;

return 0;
}
