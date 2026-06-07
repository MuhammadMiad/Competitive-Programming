#include<bits/stdc++.h>
using namespace std;
int KthMissing(int arr[],int n,int k){
int left=0;
int right=n-1;
int ans=n;
while(left<=right){
    int mid=left+(right-left)/2;
    if(arr[mid]-mid-1>=k){
        ans=mid;
        right=mid-1;
    }
    else{
        left=mid+1;
    }

}
return ans+k;
}
int main(){
int arr[]={2,3,4,7,11};
int n=sizeof(arr)/sizeof(arr[0]);
int k=10;
cout<<k<<" th missing Value: "<<KthMissing(arr,n,k)<<endl;
return 0;
}
