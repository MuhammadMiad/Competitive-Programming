#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int  main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<pair<ll,ll>>arr;
        ll mn=1e9+7;;
        for(int i=0;i<n;i++){
            int p;cin>>p;
            vector<ll>temp(p);
            for(int j=0;j<p;j++)cin>>temp[j];

            sort(begin(temp),end(temp));
            arr.push_back({temp[1],temp[0]});
            mn=min(mn,temp[0]);
        }
        sort(begin(arr),end(arr));
        ll sum=0;
        for(int i=1;i<arr.size();i++){
            sum+=arr[i].first;
        }
        sum+=mn;

        cout<<sum<<endl;
    }
return 0;
}
