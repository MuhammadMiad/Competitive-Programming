#include<bits/stdc++.h>
using namespace std;
void  Merge(int arr[],int low,int mid,int high);
void   MergeSort(int arr[],int low,int high){
//if(low==high)
//    return  arr[low];
//}
//else
if(low<high){

        int mid=(low+high)/2;
    MergeSort(arr,low,mid);
    MergeSort(arr,mid+1,high);
    Merge(arr,low,mid,high);
}
}
void  Merge(int arr[],int low,int mid,int high){
int B[10];
int i=low;
int j=high;
int k=0;
while(i<=mid&&j<=high){
    if(arr[i]<arr[j]){
        B[k]=arr[i];
        i++;
    }
    else{
        B[k]=arr[j];
        j++;
    }
    k++;
}
while(i<=mid){
    B[k++]=arr[i++];
}
while(j<=mid){
    B[k++]=arr[j++];
}

}

void display(int arr[],int n){
cout<<"After MergeSort"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<< " ";
}
cout<<endl;

}
int main(){

int arr[6]={50,60,10,70,30,40};

MergeSort(arr,0,5);
display(arr,6);


return 0;
}
