#include<bits/stdc++.h>
using namespace std;
bool BinarySearch(int arr[],int l,int r,int k){
  if(l>r)return false;
  else{
    int mid=(l+r)/2;
    if(arr[mid]==k)return true;
    else if(arr[mid]>k) return BinarySearch(arr,mid+1,r,k);
    else return BinarySearch(arr,l,mid-1,k);
  }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
int k;
cin>>k;
bool ans= BinarySearch(arr,0,n-1,k);
if(ans==true)cout<<"Find it"<<endl;
else if(ans==false) cout<<"Not Find it"<<endl;
return 0;
}
