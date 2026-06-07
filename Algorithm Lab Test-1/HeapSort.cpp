#include<bits/stdc++.h>
using namespace std;
void Heapify(int arr[],int index,int n){
 int largest=index;
 int left=2*index+1;
 int right=2*index+2;
 if(left<n&&arr[left]>arr[largest])
    largest=left;
 if(right<n&&arr[right]>arr[largest])
    largest=right;
 if(largest!=index){
    swap(arr[largest],arr[index]);
    Heapify(arr,largest,n);
 }
}
void MaxHeap(int arr[],int n){
 for(int i=n/2-1;i>=0;i--){
    Heapify(arr,i,n);
 }
}
void HeapSort(int arr[],int n){
 for(int i=n-1;i>=0;i--){
    swap(arr[0],arr[i]);
    Heapify(arr,0,i);
 }
}
void PrintHeapSort(int arr[],int n){
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}

int main(){
int arr[]={6,5,12,10,9,1};
int n=sizeof(arr)/sizeof(arr[0]);

MaxHeap(arr,n);
HeapSort(arr,n);
PrintHeapSort(arr,n);

return 0;
}

