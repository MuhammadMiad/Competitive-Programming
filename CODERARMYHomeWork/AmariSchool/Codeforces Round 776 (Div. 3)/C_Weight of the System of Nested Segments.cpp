#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll x,w,index=1;
        vector<pair<int,pair<int,int>>>arr;
        while(index<=m){
           cin>>x>>w;
           arr.push_back({w,{x,index}});
           index++;
        }

        sort(begin(arr),end(arr));
        vector<pair<int,int>>ans;
        ll sum=0;
        for(int i=0;i<2*n;i++){
            //cout<<arr[i].first<<" "<<arr[i].second.first<<" "<<arr[i].second.second<<endl;
            ans.push_back({arr[i].second.first,arr[i].second.second});
            sum+=arr[i].first;
        }
        arr.clear();
        sort(begin(ans),end(ans));
        int left=0;
        int right=2*n-1;
        cout<<sum<<endl;
        while(left<right){
           cout<<ans[left].second<<" "<<ans[right].second<<endl;
           left++,right--;
        }
        ans.clear();

    }



return 0;
}
