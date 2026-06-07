#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>arr(n),brr;
        for(int i=0;i<n;i++)cin>>arr[i];
        ll mx=arr[0];
        for(ll i=1;i<n;i++){
            mx=max(mx,arr[i]);
            if(i%2){
                arr[i]=mx;
            }
        }
        ll cnt=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
              int left=(i>0?arr[i-1]:INT_MAX);
              int right=(i+1<n?arr[i+1]:INT_MAX);
              int dif=min(left,right);
              int ans=arr[i]-(dif-1);
              if(ans>0)cnt+=ans;
            }
        }
        cout<<cnt<<endl;
    }


return 0;
}
