#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
        ll n,m;cin>>n>>m;
        vector<pair<ll,ll>>arr(n);
        ll  ori=0;
        ll com=0;
        for(int i=0;i<n;i++){
            cin>>arr[i].first;
            cin>>arr[i].second;

            ori+=arr[i].first;
            com+=arr[i].second;

            arr[i].first=abs(arr[i].first-arr[i].second);
        }

        sort(begin(arr),end(arr),greater<>());


        if(com>m)cout<<-1<<endl;
        else if(ori<=m)cout<<0<<endl;
        else{
                ll cnt=0;
              for(int i=0;i<n;i++){
                ori-=arr[i].first;
                cnt++;
                if(ori<=m){
                    cout<<cnt<<endl;
                    break;
                }
              }
        }

return 0;
}
