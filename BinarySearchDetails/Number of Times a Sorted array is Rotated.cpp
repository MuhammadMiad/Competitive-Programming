#include<bits/stdc++.h>
using namespace std;
int CountRotations(int arr[],int n){
int low=0;
int high=n-1;
if(arr[low]<=arr[high])return 0;
while(low<=high){
    int mid=low+(high-low)/2;
    int prev=(mid+n-1)%n;
    int next=(mid+1)%n;

    if(arr[mid]<=arr[prev]&&arr[mid]<=arr[next])return mid;
    else if(arr[mid]<=arr[high])high=mid-1;
    else if(arr[mid]>=arr[0])low=mid+1;

}
return 0;

}
int main(){
int arr[]={7, 9, 11, 12, 5,6};
int n=sizeof(arr)/sizeof(arr[0]);

int ans=CountRotations(arr,n);
cout<<"Rotated index: "<<ans<<endl;
return 0;
}
