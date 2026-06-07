#include<bits/stdc++.h>
using namespace std;
void  FirstOcur(int arr[],int n,int k){
   int low=0;
   int high=n-1;
   int result1=-1;
   while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==k){
        result1=mid;
        high=mid-1;
    }
    else if(arr[mid]>k)high=mid-1;
    else low=mid+1;
   }


    low=0;
    high=n-1;
    int result2=-1;
 while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==k){
        result2=mid;
        low=mid+1;
    }
    else if(arr[mid]>k)high=mid-1;
    else low=mid+1;
 }

cout<<"First Occurrence: "<<result1<<endl;
cout<<"Last Occurrence: "<<result2<<endl;

}
int main(){
int arr[]={1,3,5,5,5,5,67,123,125};
int n=sizeof(arr)/sizeof(arr[0]);
int k=5;
FirstOcur(arr,n,k);
return 0;
}
