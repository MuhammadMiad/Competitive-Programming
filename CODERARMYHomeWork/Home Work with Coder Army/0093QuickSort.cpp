#include<bits/stdc++.h>
using namespace std;
int Partition(vector<int>&arr,int left,int right){
 int pos=left;
 for(int i=left;i<=right;i++){
    if(arr[i]<=arr[right]){
        swap(arr[i],arr[pos]);
        pos++;
    }
 }
 return pos-1;
}
void QuickSort(vector<int>&arr,int start,int End){
   if(start>=End)return ;

   int pivot=Partition(arr,start,End);
             QuickSort(arr,start,pivot-1);
             QuickSort(arr,pivot+1,End);

}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


return 0;
}

