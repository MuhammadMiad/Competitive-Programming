#include<bits/stdc++.h>
using namespace std;
void BinarySearch(vector<int>&v,int n,int k){
 int start=0,ans;
 int End=n-1;
  while(start<=End){
    int mid=start+(End-start)/2;
    if(v[mid]==k){
        ans=mid+1;
        End=mid-1;
    }
    else if(v[mid]>k){
            End=mid-1;
            ans=mid;
    }

    else start=mid+1;
  }
  cout<<"Insert Position:"<<ans+1<<endl;
}
int main(){
    int n;
    cin>>n;
    cout<<"Be careful,This Array must be Sorted"<<endl;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int k;
    cout<<"Enter Searching Value:"<<endl;
    cin>>k;

    BinarySearch(v,n,k);


return 0;
}
