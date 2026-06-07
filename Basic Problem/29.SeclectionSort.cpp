#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={10,8,2,3,1,4};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n-1;i++){
        int mn=i;
    for(int j=i+1;j<n;j++){
        if(arr[mn]>arr[j])mn=j;
    }
    int temp=arr[mn];
    arr[mn]=arr[i];
    arr[i]=temp;
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;
}
