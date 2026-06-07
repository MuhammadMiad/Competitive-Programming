#include<bits/stdc++.h>
using namespace std;
int MissingValue(vector<int>&arr,int n,int k){
 int left=0;
 int right=n-1;
 int ans=n;
 while(left<=right){
    int mid=left+(right-left)/2;
    if(arr[mid]-mid-1>=k){
        ans=mid;
        right=mid-1;
    }
    else left=mid+1;
 }
 return ans+k;
}
int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++)cin>>arr[i];
int k;
cin>>k;
int ans=MissingValue(arr,n,k);
cout<<k<<" th missing Value:"<<ans<<endl;
return 0;
}
