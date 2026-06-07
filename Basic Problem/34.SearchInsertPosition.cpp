#include<bits/stdc++.h>
using namespace std;
int SearchInsert(int arr[], int n, int k)
    {
         int left=0,right=n-1;
         int pos=0;
         if(k<arr[0])return 0;
         if(k>arr[n-1])return n;
         while(left<=right){
             int mid=left+(right-left)/2;
             if(arr[mid]==k)return mid;
             else if(arr[mid]<k){
                 pos=mid;
                 left=mid+1;
             }
             else right=mid-1;
         }
         return pos+1;
    }
int main(){
int arr[]={1,3,5,6};
int n=sizeof(arr)/sizeof(arr[0]);
int target=2;
cout<<"Insert Position: "<<SearchInsert(arr,n,target)<<endl;
return 0;
}
