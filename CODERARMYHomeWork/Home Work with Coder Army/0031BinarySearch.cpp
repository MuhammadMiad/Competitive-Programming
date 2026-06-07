#include<bits/stdc++.h>
using namespace std;
bool BinarySearch(vector<int>&v,int n,int k){
 int start=0;
 int End=n-1;
  while(start<=End){
    int mid=start+(End-start)/2;
    if(v[mid]==k)return 1;
    else if(v[mid]>k)End=mid-1;
    else start=mid+1;
  }
  return 0;
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

    bool ans=BinarySearch(v,n,k);
    if(ans)cout<<"Found the Value."<<endl;
    else cout<<"Not found the value."<<endl;

return 0;
}
