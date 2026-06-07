#include<bits/stdc++.h>
using namespace std;
int Array_sum(int arr[],int n){
if(n<0)return 0;
return Array_sum(arr,n-1)+arr[n];
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
cout<<Array_sum(arr,n)<<endl;


return 0;
}
