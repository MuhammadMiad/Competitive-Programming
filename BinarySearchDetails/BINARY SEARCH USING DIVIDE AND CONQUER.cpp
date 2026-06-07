#include<bits/stdc++.h>
using namespace std;
bool BinarySearch(int arr[],int low,int high,int key){
    if(low>high)return false;
    else{
    int mid=(low+high)/2;
    if(arr[mid]==key)
     return true;
    else if(arr[mid]<key) return BinarySearch(arr,mid+1,high,key);
    else return BinarySearch(arr,low,mid-1,key);
}
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)cin>>arr[i];
int key;
cin>>key;
sort(arr,arr+n);
bool ans=BinarySearch(arr,0,n-1,key);
if(ans==true)cout<<"Found Value"<<endl;
else cout<<"Found Not Value"<<endl;

return 0;
}
