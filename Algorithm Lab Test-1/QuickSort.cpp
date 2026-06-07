#include<bits/stdc++.h>
using namespace std;
int Partition(int arr[],int start,int End){
int pos=start;
for(int i=start;i<=End;i++){
    if(arr[i]<=arr[End]){
        swap(arr[i],arr[pos]);
        pos++;
    }
 }
 return pos-1;
}
void QuickSort(int arr[],int start,int End){
    if(start>=End)return;

   int pivot=Partition(arr,start,End);
            QuickSort(arr,start,pivot-1);
            QuickSort(arr,pivot+1,End);
}
int main(){
int arr[]={6,5,1,10,9,1};
int n=sizeof(arr)/sizeof(arr[0]);
QuickSort(arr,0,n-1);
for(int i=0;i<n;i++)cout<<arr[i]<<" ";
cout<<endl;
return 0;
}
