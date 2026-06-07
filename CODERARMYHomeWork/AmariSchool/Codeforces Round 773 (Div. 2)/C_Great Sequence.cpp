#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>arr(n);
        map<ll,ll>mp;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }
        sort(begin(arr),end(arr));
        int cnt=0;
        for(int i=0;i<n;i++){
            ll x=arr[i]*k;
          if(mp.find(x)!= mp.end() and mp[arr[i]]>0 and mp[x]>0){
            mp[arr[i]]--;
            mp[x]--;
          }
          else if(mp[arr[i]]){
            cnt++;
            mp[arr[i]]--;
          }
        }
        cout<<cnt<<endl;
    }

return 0;
}
