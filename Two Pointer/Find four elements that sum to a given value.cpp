#include<bits/stdc++.h>
using namespace std;
void solve(int arr[],int n,int x){
int a=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      int l=j+1;
      int r=n-1;
      while(l<r){
        int sum=arr[i]+arr[j]+arr[l]+arr[r];
        if(sum==x){
            cout<<arr[i]<< " , "<<arr[j]<<" , "<<arr[l]<< " , "<<arr[r]<<endl;
            a=1;
        }
        if(sum<x) l++;
        else r--;
      }
    }
}
if(a==0) cout<<"Four elements is not found"<<endl;
}
int  main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
sort(arr,arr+n);
int x;
cin>>x;
solve(arr,n,x);


return 0;
}
