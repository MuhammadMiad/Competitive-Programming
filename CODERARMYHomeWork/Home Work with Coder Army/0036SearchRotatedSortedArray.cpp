#include<bits/stdc++.h>
using namespace std;
int Search(vector<int>&v,int n,int k){
   int left=0;
   int right=n-1;
   while(left<=right){
    int mid=left+(right-left)/2;
    if(v[mid]==k)return mid;
    else if(v[mid]>=v[0]){
        if(v[mid]>=k and v[left]<=k)right=mid-1;
        else left=mid+1;
    }
    else{
        if(v[mid]<=k and v[right]>=k)left=mid+1;
        else right=mid-1;
    }

   }
   return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int k;
    cin>>k;
    int ans=Search(v,n,k);
    if(ans!=-1){
        cout<<"The index of Searching value: "<<ans<<endl;
    }
    else
       cout<<"Sorry,Not found this value."<<endl;

return 0;
}
