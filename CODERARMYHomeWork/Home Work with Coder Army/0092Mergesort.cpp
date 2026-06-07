#include<bits/stdc++.h>
using namespace std;
void Merge(vector<int>&arr,int start,int mid,int End){
   vector<int>temp(End-start+1);
   int left=start,right=mid+1,index=0;
   while(left<=mid and right<=End){
     if(arr[left]<arr[right]){
        temp[index]=arr[left];
        index++,left++;
     }
     else{
        temp[index]=arr[right];
        index++,right++;
     }
   }
   while(left<=mid){
    temp[index]=arr[left];
    left++,index++;
   }
   while(right<=End){
    temp[index]=arr[right];
    right++,index++;
   }

   index=0;
   while(start<=End){
    arr[start]=temp[index];
    start++,index++;
   }
}
void MergeSort(vector<int>&arr,int start,int End){
 if(start>=End)return ;
 int mid=start+(End-start)/2;
 MergeSort(arr,start,mid);
 MergeSort(arr,mid+1,End);
 Merge(arr,start,mid,End);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MergeSort(arr,0,n-1);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


return 0;
}
