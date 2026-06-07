#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int>&num,int start,int mid,int end){
  vector<int>temp(end-start+1);
  int left=start,right=mid+1,index=0;
  while(left<=mid&&right<=end){
    if(num[left]<=num[right]){
      temp[index]=num[left];
      index++,left++;
    }else{
        temp[index]=num[right];
        index++,right++;
    }
  }

  while(left<=mid){
    temp[index]=num[left];
    index++,left++;
  }
  while(right<=end){
    temp[index]=num[right];
    index++,right++;
  }
  index=0;
  while(start<=end){
    num[start]=temp[index];
    start++,index++;
  }

  }
    void Mergesort(vector<int>&num,int start,int end){
        if(start==end)return;

        int mid=start+(end-start)/2;
        Mergesort(num,start,mid);
        Mergesort(num,mid+1,end);
        Merge(num,start,mid,end);

    }


int main(){
vector<int>nums1={1,3};
vector<int>nums2={2,4};

    vector<int>arr;
     for(int i=0;i<nums1.size();i++){
       arr.push_back(nums1[i]);
     }
     for(int i=0;i<nums2.size();i++){
       arr.push_back(nums2[i]);
     }
     int start=0;
     int end=arr.size();
     Mergesort(arr,start,end-1);

     for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
     double sum=0;
     if(arr.size()%2==0){
        int mid=end/2;
          sum+=arr[mid];
          sum+=arr[mid-1];
          sum/=2;
       }else{
         int mid=end/2;
          sum+=arr[mid];
       }

       cout<<sum<<endl;

return 0;
}
