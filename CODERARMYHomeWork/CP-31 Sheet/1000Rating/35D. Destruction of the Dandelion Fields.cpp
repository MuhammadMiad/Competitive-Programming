#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;cin>>t;
    while(t--){
       ll n;
       cin>>n;
       vector<ll>arr(n);
       int flag=0;
       for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2)flag=1;
       }
       if(flag==0){
        cout<<0<<endl;
        continue;
       }
       int cnt=0;

       ll mx=0;
       for(int i=0;i<n;i++){
            ll sum=0;
         if(arr[i]%2){
            sum+=arr[i];
            if(i-1>=0 and arr[i-1]%2==0){
             for(int j=i-1;j>=0;j--){
                if(arr[j]%2)break;
                sum+=arr[j];
             }
            }
            if(i+1<n and arr[i-1]%2==0){
                for(int j=i+1;j<n;j++){
                    if(arr[j]%2)break;
                    sum+=arr[j];
                }
            }
            mx=max(sum,mx);

         }
       }

       cout<<mx<<endl;
    }

return 0;
}
