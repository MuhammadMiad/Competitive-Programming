#include<bits/stdc++.h>
using namespace std;
int PeakValue(vector<int>&v,int n){
 int f=0;
 int s=n-1;
 while(f<=s){
    int mid=f+(s-f)/2;
    if(v[mid-1]<v[mid]&&v[mid]>v[mid+1])return mid;
    else if(v[mid]<v[mid-1])s=mid-1;
    else f=mid+1;
 }
 return n-1;
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    int ans=PeakValue(v,n);
    cout<<v[ans]<<endl;

return 0;
}
