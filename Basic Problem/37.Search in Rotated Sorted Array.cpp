#include<bits/stdc++.h>
using namespace std;
int SearchRotate(int arr[],int n,int target){
int left=0;
int right=n-1;
while(left<=right){
    int mid=left+(right-left)/2;
    if(arr[mid]==target)return mid;
    else if(arr[mid]<=arr[n-1]){
        if(arr[mid]<=target && target<=arr[n-1])left=mid+1;
        else right=mid-1;
    }
    else{
        if(arr[mid]>=target && target>=arr[0])right=mid-1;
        else left=mid+1;
    }
}
return -1;

}
int main(){
    int arr[]={4,5,6,7,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=0;
    cout<<"Index of Searching value "<<target<<" :"<<SearchRotate(arr,n,target)<<endl;

return 0;
}
