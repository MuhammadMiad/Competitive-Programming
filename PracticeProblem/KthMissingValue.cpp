#include<bits/stdc++.h>
using namespace std;
int KthMissingValue(int arr[],int n,int k){
 int l=0;
 int h=n-1;
 int ans;
 while(l<=h){
    int mid=l+(h-l)/2;
    if(arr[mid]-mid-1>=k){
        ans=mid;
        h=mid-1;
    }
    else l=mid+1;
 }
 cout<<ans<<endl;
 return ans+k;
}
int main(){
int arr[]={3,5,7,9,11,12,13};
int n=sizeof(arr)/sizeof(arr[0]);
int k=5;
 int ans=KthMissingValue(arr,n,k);
 cout<<k<<" th missing  value:"<<ans<<endl;
return 0;
}
