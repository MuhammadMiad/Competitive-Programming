#include<bits/stdc++.h>
using namespace std;
int partision(int arr[],int start,int End){
  int pos=start;
  for(int i=start;i<=End;i++){
    if(arr[i]<=arr[End]){
        swap(arr[i],arr[pos]);
        pos++;
    }
  }
  return pos-1;

}
void quicksort(int arr[],int start,int End){
   if(start>=End)return;

   int pivot=partision(arr,start,End);
    quicksort(arr,start,pivot-1);
    quicksort(arr,pivot+1,End);
}
int main(){
int arr[]={6,5,12,10,9,1};
int n=sizeof(arr)/sizeof(arr[0]);
quicksort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}
