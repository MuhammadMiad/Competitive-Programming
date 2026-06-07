#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int n,m;
cin>>n>>m;
vector<ll>arr(n);
for(int i=0;i<n;i++)cin>>arr[i];
sort(begin(arr),end(arr),greater<ll>());
for(int i=1;i<n;i++){
    arr[i]=arr[i-1]+arr[i];
}
while(m--){
    int x,y;
    cin>>x>>y;
    ll sum=0;
    if(x-y-1>=0)sum=arr[x-1]-arr[x-y-1];
    else sum=arr[x-1];
    cout<<sum<<endl;
}


return 0;
}
