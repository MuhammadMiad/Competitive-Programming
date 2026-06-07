#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
      ll n,k;cin>>n>>k;
      vector<pair<ll,ll>>arr;
      for(ll i=0;i<n;i++){
        ll x;cin>>x;
        arr.push_back({x,i+1});
      }
      sort(begin(arr),end(arr));

      for(int i=0;i<n-2;i++){

        int l=i+1;
        int r=n-1;
        while(l<r){
            if(arr[l].first+arr[r].first+arr[i].first==k){
                cout<<arr[i].second<<" "<<arr[l].second<<" "<<arr[r].second<<endl;
                return 0;
            }
            else if(arr[l].first+arr[r].first+arr[i].first>k){
                r--;
            }
            else l++;
        }
      }

      cout<<"IMPOSSIBLE"<<endl;



    return 0;
}