//#include<bits/stdc++.h>
//using namespace std;
//void Reverse(int arr[],int l,int r){
//     if(l>=r)return;
//     swap(arr[l],arr[r]);
//     Reverse(arr,l+1,r-1);
//}
//int main(){
//    int arr[]={5,10,15,20,25};
//    int n=sizeof(arr)/sizeof(arr[0]);
//    Reverse(arr,0,n-1);
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl;
//
//return 0;
//}


#include<bits/stdc++.h>
using namespace std;
void Reverse(int i,int arr[],int n){
     if(i>=n/2)return;
     swap(arr[i],arr[n-i-1]);
     Reverse(i+1,arr,n);
}
int main(){
    int arr[]={5,10,15,20,25};
    int n=sizeof(arr)/sizeof(arr[0]);
    Reverse(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

return 0;
}
