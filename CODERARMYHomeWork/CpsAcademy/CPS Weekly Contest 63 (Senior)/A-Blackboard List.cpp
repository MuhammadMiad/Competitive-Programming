#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  int t;
  cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(begin(arr),end(arr));
    if(arr[0]<0)cout<<arr[0]<<endl;
    else cout<<arr[n-1]<<endl;

}

return 0;
}
