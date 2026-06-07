#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool comparator(pair<ll,ll>a,pair<ll,ll>b){
 if(a.first!=b.first)return a.first>b.first;
 else return a.second<b.second;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>arr(n);
        for(int i=0; i<n; i++)cin>>arr[i];

        vector<pair<ll,ll>>temp;
        vector<ll>ans;
        for(int i=0;i<n;i++){
            if(arr[i]%k==0)ans.push_back(i+1);
            else temp.push_back({arr[i]%k,i+1});
        }

        sort(begin(temp),end(temp),comparator);
        for(int i=0;i<temp.size();i++){
            ans.push_back(temp[i].second);
        }

        for(auto &p:ans)cout<<p<<" ";
        cout<<endl;


    }
    return 0;
}
