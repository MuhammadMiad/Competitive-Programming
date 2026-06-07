#include<bits/stdc++.h>
using namespace std;
int FindCeilValue(int arr[],int n,int target){
int l=0;
int r=n-1;
int res=0;
if(arr[r]<target)return -1;
while(l<=r){
    int mid=l+(r-l)/2;
    if(arr[mid]==target)return arr[mid];
    else if(arr[mid]>target){
        res=arr[mid];
        r=mid-1;
    }
    else if(arr[mid]<target)l=mid+1;
}
return res;
}
int main(){
int arr[]={1, 2, 8, 10, 10, 12, 19};
int k=19;
int n=sizeof(arr)/sizeof(arr[0]);
int ans=FindCeilValue(arr,n,k);
cout<<ans<<endl;
return 0;
}
