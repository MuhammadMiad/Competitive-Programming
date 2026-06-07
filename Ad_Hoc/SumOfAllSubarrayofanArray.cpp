#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n+1];
for(int i=1;i<=n;i++)cin>>arr[i];
int ans=0,sum;
for(int i=1;i<=n;i++){
        sum=0;
    for(int j=i;j<=n;j++){
        sum+=arr[j];
      ans+=sum;
    }
}
for(int i=1;i<n;i++)ans+=arr[i];
cout<<ans<<endl;

return 0;
}
