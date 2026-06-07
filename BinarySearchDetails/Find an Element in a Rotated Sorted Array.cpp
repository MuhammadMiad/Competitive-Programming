//#include<bits/stdc++.h>
//using namespace std;
//int BinarySearch(int arr[],int l,int h,int k){
//while(l<=h){
//        int mid=l+(h-l)/2;
//    if(arr[mid]==k) return mid;
//    else if(arr[mid]<k)l=mid+1;
//    else h=mid-1;
//}
//return -1;
//}
//int CountRotations(int arr[],int n,int k){
//int low=0;
//int high=n-1;
//int store;
//if(arr[low]<=arr[high]){
//    store=BinarySearch(arr,0,n-1,k);
//    return store;
//}
//
//while(low<=high){
//    int mid=low+(high-low)/2;
//    int prev=(mid-1+n)%n;
//    int next=(mid+1)%n;
//    if(arr[mid]<=arr[prev]&&arr[mid]<=arr[next]){
//        store= BinarySearch(arr,0,mid-1,k);
//        if(store!=-1)return store;
//        else{
//            store =BinarySearch(arr,mid,n-1,k);
//            return store;
//        }
//
//    }
//    else if(arr[mid]<=arr[high])high=mid-1;
//    else if(arr[mid]>=arr[0])low=mid+1;
//}
//return 0;
//                               /**That is time Complexity More than linear search**/
//}
//int main(){
//int arr[]={7, 9, 11, 12, 5};
//int n=sizeof(arr)/sizeof(arr[0]);
// int k=10;
//int ans=CountRotations(arr,n,k);
//cout<<"Searching index: "<<ans<<endl;
//
//return 0;
//}


#include<bits/stdc++.h>
using namespace std;
int CountRotations(int arr[],int n,int k){
  for(int i=0;i<n;i++){
    if(arr[i]==k)return i;
  }
  return -1;

}
int main(){
int arr[]={7, 9, 11, 12, 5};
int n=sizeof(arr)/sizeof(arr[0]);
 int k=5;
int ans=CountRotations(arr,n,k);
cout<<"Searching index: "<<ans<<endl;
return 0;
}
