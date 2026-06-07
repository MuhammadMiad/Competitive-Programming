#include<bits/stdc++.h>
using namespace std;
void Merge(int arr[],int start,int mid,int End){
vector<int>temp(End-start+1);
int left=start,right=mid+1,index=0;
while(left<=mid && right<=End){
    if(arr[left]<=arr[right]){
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
    index++,left++;
}
while(right<=End){
    temp[index]=arr[right];
    index++,right++;
}
index=0;
while(start<=End){
    arr[start]=temp[index];
    index++,start++;
}

}
void MergeSort(int arr[],int start,int End){
if(start==End)return;

int mid=start+(End-start)/2;
MergeSort(arr,start,mid);
MergeSort(arr,mid+1,End);
Merge(arr,start,mid,End);



}
int main(){
int arr[]={4,1,7,15,12,9,2,23};
int n=8;
MergeSort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}
