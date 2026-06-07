#include<bits/stdc++.h>
using namespace std;
int Binary(vector<int>&arr,int n,int x){
 int l=0;
 int r=n-1;
 while(l<=r){
    int mid=l+(r-l)/2;
    if(arr[mid]==x)return 1;
    else if(arr[mid]>x)r=mid-1;
    else l=mid+1;
 }
 return 0;
}
int main(){
    int n,q;
    cin>>n>>q;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(begin(arr),end(arr));
    while(q--){
        int x;
        cin>>x;
        int ans=Binary(arr,n,x);
        if(ans)cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }
return 0;
}
