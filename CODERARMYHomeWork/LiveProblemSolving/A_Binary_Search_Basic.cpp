#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;cin>>n;
     vector<int>arr(n);
     for(int i=0;i<n;i++)cin>>arr[i];
      int k;cin>>k;
     int i=0,j=n-1;
     int ans=-1;
     while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]==k){
            ans=mid;
            break;
        }
        else if(arr[mid]>k){
            j=mid-1;
        }
        else i=mid+1;
     }
     cout<<ans<<endl;

    return 0;
}