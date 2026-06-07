#include<bits/stdc++.h>
using namespace std;
vector<int>v;
void solve(int arr[],int n){
    int l=0;
    int r=n-1;
    int x=0;
while(l<r){
     x+=(arr[r]-arr[l]);
     l++;
     r--;
}
v.push_back(x);
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    solve(arr,n);
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
