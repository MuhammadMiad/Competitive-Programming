#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];

    long long ans=0;
    for(int i=0;i<n;i++){
        ans+=arr[i];
        if(ans<0)ans=0;
    }
    cout<<ans<<endl;

return 0;
}
