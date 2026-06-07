#include<bits/stdc++.h>
using namespace std;
int MinimumDiff(int arr[],int n,int k){
  int l=0;
  int r=n-1;
  while(l<=r){
    int mid=l+(r-l)/2;
    if(arr[mid]==k)return arr[mid];
    else if(arr[mid]>k)r=mid-1;
    else if(arr[mid]<k)l=mid+1;
  }
  int x=abs(arr[l]-k);
  int y=abs(arr[r]-k);
  int res;
  if(x>y)res=arr[r];
 else res=arr[l];
 return res;

}
int main(){
int arr[]={2,5,6,8,12,15};
int n=sizeof(arr)/sizeof(arr[0]);
int key=20;
int ans=MinimumDiff(arr,n,key);
cout<<"Minimum Difference of element from target element: "<<ans<<endl;
return 0;
}
