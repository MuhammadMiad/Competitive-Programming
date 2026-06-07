#include<bits/stdc++.h>
using namespace std;
int MaxSumSubarray(int arr[],int n,int k){
int i=0;
int j=0;
int sum=0;
int mx=0;
while(j<n){
    sum+=arr[j];
    if(j-i+1<k){
        j++;
    }
    else if(j-i+1==k){
    mx=max(mx,sum);
    sum-=arr[i];
        i++;
        j++;
    }
}
return mx;
}
int main(){
    int arr[]={9,9,9,1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
   cout<<MaxSumSubarray(arr,n,k)<<endl;

}
