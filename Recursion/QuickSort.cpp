#include<bits/stdc++.h>
using namespace std;
int Partition(int arr[],int start,int End){
 int position=start;
 for(int i=start;i<=End;i++){
    if(arr[i]<=arr[End]){
        swap(arr[i],arr[position]);
        position++;
    }
 }
 return position-1;
}
void QuickSort(int arr[],int start,int End){
 if(start>=End)return;

 int pivot=Partition(arr,start,End);
           QuickSort(arr,start,pivot-1);
           QuickSort(arr,pivot+1,End);
}
int main(){
int arr[]={4,1,7,15,12,9,2,23};
int n=8;
QuickSort(arr,0,n-1);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}
