#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={0,0,1,1,0,0,0,0,1,1,0,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int start=0,End=n-1;
    while(start<End){
        if(arr[start]==0)start++;
        else {
            if(arr[End]==0){
                swap(arr[start],arr[End]);
                start++,End--;
            }
            else End--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}
