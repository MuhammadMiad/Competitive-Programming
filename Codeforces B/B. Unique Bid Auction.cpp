#include<bits/stdc++.h>
using namespace std;
//int BinarySearch(int arr[],int n,int k){
//int l=0;
//int r=n-1;
//while(l<=r){
//    int mid=(l+r)/2;
//    if(arr[mid]==k){
//        return mid+1;
//    }
//    else if(arr[mid]<k)l=mid+1;
//    else if(arr[mid]>k)r=mid-1;
//}
//
//}
int main(){
int t;
cin>>t;
map<int,int>mp;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
        mp[x]++;
    }
    int store=-1;
    for(auto it:mp){
        if(it.second==1){
           store=it.first;
           break;
        }
    }
    if(store!=-1){
//        cout<<BinarySearch(arr,n,store)<<endl;
     for(int i=0;i<n;i++){
       if(arr[i]==store){
            cout<<i+1<<endl;
            break;
       }

     }
    }
    else cout<<"-1"<<endl;
    mp.clear();
}


return 0;
}
