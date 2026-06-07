#include<bits/stdc++.h>
using namespace std;
void Array(int arr[],int index){
 if(index<0)return;
 ///Reverse order
 //cout<<arr[index]<<" ";
 Array(arr,index-1);
 ///General order
 cout<<arr[index]<<" ";
}
int main(){
int arr[]={12,6,23,15,33};
int n=5;
Array(arr,n-1);

return 0;
}
