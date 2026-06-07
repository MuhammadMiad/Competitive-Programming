#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={10,8,2,3,1,4};
int n=sizeof(arr)/sizeof(arr[0]);

for(int i=1;i<n;i++){
    for(int j=i;j>0;j--){
        if(arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
        }
        else break;
    }
}
for(int i=0;i<n;i++)cout<<arr[i]<<" ";
cout<<endl;

return 0;
}
