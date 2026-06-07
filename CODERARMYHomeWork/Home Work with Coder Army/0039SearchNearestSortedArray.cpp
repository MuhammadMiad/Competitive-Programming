#include<bits/stdc++.h>
using namespace std;
int  NearestSearch(vector<int>&arr,int left,int right,int k){
 if(left<=right){
     int mid=left+(right-left)/2;
    if(arr[mid]==k)return mid;
     if(left<=mid-1 and arr[mid-1]==k)return mid-1;
     if(right>=mid+1 and arr[mid+1]==k)return mid+1;
     if(arr[mid]>k)NearestSearch(arr,left,mid-2,k);
     else NearestSearch(arr,mid+2,right,k);
 }
 return -1;
}
int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int k;
cin>>k;

int ans=NearestSearch(arr,0,n-1,k);
if(ans!=-1)
cout<<"The position of searching Value: "<<ans<<endl;
else cout<<"Not found searching Value"<<endl;
return 0;
}
