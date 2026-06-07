#include<bits/stdc++.h>
using namespace std;
int countElement(int arr[],int n,int k){
int low=0;
int high=n-1;
int res1=0;
while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==k){
        res1=mid;
        high=mid-1;
    }
    else if(arr[mid]>k)high=mid-1;
    else low=mid+1;
}
low=0;
high=n-1;
int res2=0;
while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==k){
        res2=mid;
        low=mid+1;
    }
    else if(arr[mid]>k)high=mid-1;
    else low=mid+1;
}
return res2-res1+1;
}
int main(){
int arr[]={1,3,5,5,5,5,67,123,125};
int n=sizeof(arr)/sizeof(arr[0]);
int k=5;
int ans=countElement(arr,n,k);
cout<<"Count of Element in a Array:"<<ans<<endl;
return 0;
}
