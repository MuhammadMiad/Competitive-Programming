#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={34,1,40,0,4,45};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n-1;i++){
     int index=i;
    for(int j=i+1;j<n;j++){
        if(arr[index]>arr[j])index=j;
    }
   int temp=arr[index];
     arr[index]=arr[i];
     arr[i]=temp;
}
for(int i=0;i<n;i++)cout<<arr[i]<<" ";

return 0;
}
