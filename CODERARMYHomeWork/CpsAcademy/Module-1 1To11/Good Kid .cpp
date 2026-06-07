#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
   int n;cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++)cin>>arr[i];
   sort(begin(arr),end(arr));
   arr[0]++;
   int mul=1;
   for(int i=0;i<n;i++){
    mul*=arr[i];
   }
   cout<<mul<<endl;
}
return 0;
}
