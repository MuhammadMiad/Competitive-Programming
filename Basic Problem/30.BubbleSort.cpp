#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={7,4,8,5,3};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++){
        int check=0;
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
             check=1;
        }
    }
    if(check==0)break;
}

for(int i=0;i<n;i++)cout<<arr[i]<<" ";

return 0;
}
