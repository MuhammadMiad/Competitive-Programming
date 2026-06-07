#include<bits/stdc++.h>
using namespace std;
bool NearestSearch(int arr[],int n,int k){
int l=0;
int h=n-1;
while(l<=h){
    int mid=l+(h-l)/2;
    if(arr[mid]==k)return 1;
    if(l<=mid-1&&arr[mid-1]==k)return 1;
    if(mid+1<=h&&arr[mid+1]==k)return 1;
    if(arr[mid]>k)h=mid-2;
    else l=mid+2;
}
return 0;
}
int main(){
int arr[]={10,3,40,20,50,80,70};
int k=50;
int n=sizeof(arr)/sizeof(arr[0]);
bool ans=NearestSearch(arr,n,k);
if(ans)cout<<"Present this value."<<endl;
else cout<<"Absent this value."<<endl;


return 0;
}
