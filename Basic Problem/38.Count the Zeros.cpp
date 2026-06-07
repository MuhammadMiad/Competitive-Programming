#include<bits/stdc++.h>
using namespace std;
int countZeroes(int arr[],int n) {
        int left=0,right=n-1;
        int first=0,last=0;
        if(arr[0]==0&&arr[n-1]==0)return n;
        while(left<=right){
            int mid=left+(right-left)/2;
             if(arr[mid]==0){
                 right=mid-1;
                 first=mid;
             }
             else if(arr[mid]>0)left=mid+1;
             else right=mid-1;
        }

        left=0,right=n-1;
         while(left<=right){
            int mid=left+(right-left)/2;
             if(arr[mid]==0){
                 left=mid+1;
                 last=mid;
             }
             else if(arr[mid]>0)left=mid+1;
             else right=mid-1;
        }

        return last-first+1;
    }
int main(){
int arr[]={1,1,1,1,1,1,1,1,1,0,0,0,0,0};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<"Number of Zeros: "<<countZeroes(arr,n)<<endl;
return 0;
}
