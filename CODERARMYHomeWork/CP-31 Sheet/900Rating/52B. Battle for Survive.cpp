#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>ar(n);
        for(int i=0;i<n;i++)cin>>ar[i];

        for(int i=0;i<n-2;i++){
            ar[n-2]-=ar[i];
        }
        cout<<ar[n-1]-ar[n-2]<<endl;
    }


return 0;
}
