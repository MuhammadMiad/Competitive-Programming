#include<bits/stdc++.h>
using namespace std;
void Mearge(int arr[],int left,int mid,int right){
 vector<int>result(right-left+1);
 int first=left,last=mid+1,index=0;
 while(first<=mid&&last<=right){
    if(arr[first]<arr[last]){
        result[index]=arr[first];
        index++;
        first++;
    }
    else {
        result[index]=arr[last];
        index++;
        last++;
    }
 }
 while(first<=mid){
    result[index]=arr[first];
    index++;
    first++;
 }
 while(last<=right){
    result[index]=arr[last];
    index++;
    last++;
 }

 index=0;
 while(left<=right){
    arr[left]=result[index];
    index++;
    left++;
 }
}
void MeargeSort(int arr[],int left,int right){
 if(left>=right)return;

 int mid=left+(right-left)/2;
 MeargeSort(arr,left,mid);
 MeargeSort(arr,mid+1,right);
 Mearge(arr,left,mid,right);
}
int main(){
int arr[]={5,40,12,17,2,6};
int n=sizeof(arr)/sizeof(arr[0]);
MeargeSort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}
