#include<bits/stdc++.h>
using namespace std;
int PosOfFirstOne(int arr[],int n){
int l=0;
int r=1;
while(1>arr[r]){
    l=r;
    r=r*2;
}
int res=0;
while(l<=r){
    int mid=l+(r-l)/2;
    if(arr[mid]==1){
        res=mid;
        r=mid-1;
    }
    else if(arr[mid]<1)l=mid+1;
    else if(arr[mid]>1)r=mid-1;
}
return res;

}
int main(){
int arr[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1};
int n=sizeof(arr)/sizeof(arr[0]);
int ans=PosOfFirstOne(arr,n);
cout<<"Position of First One(1):"<<ans<<endl;
return 0;
}
