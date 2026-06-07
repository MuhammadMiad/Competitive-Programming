#include<bits/stdc++.h>
using namespace std;
int BinarySearch(int arr[],int n,int Target){
int left=0;
int right=n-1;
while(left<=right){
    int mid=left+(right-left)/2;
    if(arr[mid]==Target)return mid;
    else if(arr[mid]>Target)right=mid-1;
    else left=mid+1;
}
return -1;
}
int main(){
    int n,target;
    cout<<"Enter Size of  Array: "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<"Enter your Finding Value:"<<endl;
    cin>>target;

    cout<<"Index of Searching Value: "<<BinarySearch(arr,n,target)<<endl;


return 0;
}
