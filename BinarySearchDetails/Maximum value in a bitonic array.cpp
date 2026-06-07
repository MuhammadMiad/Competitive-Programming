#include<bits/stdc++.h>
using namespace std;
int MaximumValueBitonic(int arr[],int n){
int l=0;
int h=n-1;
while(l<=h){
    int mid=h+(l-h)/2;///karon hocce
    if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])return arr[mid];
    else if(arr[mid]>arr[mid-1]&&arr[mid]<arr[mid+1])l=mid+1;
    else if(arr[mid]<arr[mid-1]&&arr[mid]>arr[mid+1])h=mid-1;
}
return arr[n-1];

}
int main(){
    int arr[]={5, 6, 7, 8, 9, 10, 3, 2, 1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int ans=MaximumValueBitonic(arr,n);
    cout<<"Maximum Value Of a Bitonic Array: "<<ans<<endl;
return 0;
}
