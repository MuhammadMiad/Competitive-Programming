#include<bits/stdc++.h>
using namespace std;
int sum(int arr[],int n){
   if(n==0)return arr[0];
   return arr[n]+sum(arr,n-1);
}
int main(){
int arr[]={1,2,3,4,5,6};
int n=sizeof(arr)/sizeof(arr[0]);
cout<<sum(arr,n-1);
return 0;
}
