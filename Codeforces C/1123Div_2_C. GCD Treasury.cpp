#include<bits/stdc++.h>
using namespace std;
typedef long  long int ll;
void solve(){
              ll n,x;cin>>n>>x;
              vector<int>arr(n);
              for(int i=0;i<n;i++)cin>>arr[i];
              vector<int>prime;
              for(int i=2;i*i<=x;i++){
                if(x%i==0){
                    prime.push_back(i);
                    while(x%i==0){
                        x/=i;
                    }
                }
              }
              if(x>1)prime.push_back(x);


             ll  mx=0;
              for(auto &it:prime){
                    ll sum=0;
                 for(int i=0;i<n;i++){
                    if(arr[i]%it==0)sum+=arr[i];
                 }
                 mx=max(mx,sum);
              }


              cout<<mx<<endl;


}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    //ios_base::sync_with_studio(0);cin.tie(0);cout.tie(0);
 int t;cin>>t;while(t--)solve();

return 0;
}
