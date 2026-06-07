#include<bits/stdc++.h>
using namespace std;
int findPeakElement(int nums[],int n) {
        if(n==1)return 0;
        if(nums[0]>nums[1])return 0;
        if(nums[n-1]>nums[n-2])return n-1;
        int l=0;
        int h=n-2;
        while(l<h){
            int mid=l+(h-l)/2;
          if(nums[mid]>nums[mid+1]){
            h=mid;
          }
          else l=mid+1;
        }
        return l;

    }
int main(){
 int arr[]={1,2,1,3,5,6,4};
 int n=sizeof(arr)/sizeof(arr[0]);
 int ans=findPeakElement(arr,n);
 cout<<"Index of PeakElement:"<< ans<<endl;

return 0;
}
