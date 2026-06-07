#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[],int start,int mid,int End){
  vector<int>temp(End-start+1);
  int left=start,right=mid+1,index=0;
  while(left<=mid&&right<=End){
    if(arr[left]<=arr[right]){
        temp[index]=arr[left];
        left++,index++;
    }else{
       temp[index]=arr[right];
       right++,index++;
    }
  }
  ///Extra element
  while(left<=mid){
    temp[index]=arr[left];
    index++,left++;
  }
  while(right<=End){
    temp[index]=arr[right];
    index++,right++;
  }

  index=0;
  while(start<=End){
    arr[start]=temp[index];
    start++,index++;
  }

}
void mergesort(int arr[],int start,int End){
   if(start==End)return;

 int mid=start+(End-start)/2;
   mergesort(arr,start,mid);
   mergesort(arr,mid+1,End);
   Merge(arr,start,mid,End);
}
int main(){
int arr[]={6,3,5,2,2,8,1,3,2,9};
int n=sizeof(arr)/sizeof(arr[0]);
mergesort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
