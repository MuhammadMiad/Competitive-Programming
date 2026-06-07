#include<bits/stdc++.h>
using namespace std;
int Partition(int arr[],int left,int right){
int pos=left;
for(int i=left;i<=right;i++){
    if(arr[i]<=arr[right]){
        swap(arr[pos],arr[i]);
        pos++;
    }
}
return pos-1;

}
void QuickSort(int arr[],int left,int right){
 if(left>right)return;


 int mid=left+(right-left)/2;
 int pivot=Partition(arr,left,right);
           QuickSort(arr,left,pivot-1);
           QuickSort(arr,pivot+1,right);
}
int main(){
int arr[]={20,1,1,500,25,17,4};
int n=sizeof(arr)/sizeof(arr[0]);
QuickSort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}
