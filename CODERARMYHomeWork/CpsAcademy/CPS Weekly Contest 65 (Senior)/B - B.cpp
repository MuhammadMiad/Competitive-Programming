#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;while(t--){
  int n;cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++)cin>>arr[i];

  sort(begin(arr),end(arr));

  int l=0;
  int r=n-1;
  int sum=0;
  while(l<r){
   sum+=arr[r]-arr[l];
   l++,r--;
  }
 cout<<sum<<endl;

 }


return 0;
}
