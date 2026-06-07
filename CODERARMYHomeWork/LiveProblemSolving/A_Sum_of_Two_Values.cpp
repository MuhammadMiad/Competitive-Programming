#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,k;cin>>n>>k;
    vector<pair<ll,ll>>arr;
    for(int i=0;i<n;i++){
       int x;cin>>x;
       arr.push_back({x,i+1});
    }
    sort(begin(arr),end(arr));
    int i=0,j=n-1;
    while(i<j){
        if(arr[i].first+arr[j].first==k){
            cout<<arr[i].second<<" "<<arr[j].second<<endl;
            return 0;
        }
        else if(arr[i].first+arr[j].first>k)j--;
        else i++;
    }
    cout<<"IMPOSSIBLE"<<endl;


    return 0;
}
