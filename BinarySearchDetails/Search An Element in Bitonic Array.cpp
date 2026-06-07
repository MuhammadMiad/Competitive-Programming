#include<bits/stdc++.h>
using namespace std;
int IncreseBinary(int arr[],int l,int r,int key){
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==key)return mid;
        else if(arr[mid]>key)r=mid-1;
        else l=mid+1;
    }
    return -1;
}
int DecreseBinary(int arr[],int l,int r,int key){
    while(l<=r){
        int mid=l+(r-l)/2;
        if(arr[mid]==key)return mid;
        else if(arr[mid]>key)l=mid+1;
        else r=mid-1;
    }
    return -1;
}
int SearchBitonic(int arr[],int n,int key){
int l=0;
int h=n-1;
while(l<=h){
    int mid=l+(h-l)/2;
    if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])return mid;
    else if(arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1])l=mid+1;
    else if(arr[mid]>arr[mid+1]&&arr[mid]<arr[mid-1])h=mid-1;
}
return 0;
}
int main(){
int arr[] = {5, 6, 7, 8, 9, 10, 3, 2, 1};
int key=-1;
int n=sizeof(arr)/sizeof(arr[0]);
int ans=SearchBitonic(arr,n,key);
int an=IncreseBinary(arr,0,ans,key);
if(an!=-1)cout<<"Find Value and index:"<<an<<endl;
else {
  int  bs=DecreseBinary(arr,ans+1,n-1,key);
    if(bs!=-1)cout<<"Find Value and index:"<<bs<<endl;
    else cout<<"Not Find "<<endl;
}
return 0;
}
