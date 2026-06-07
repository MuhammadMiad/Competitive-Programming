#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool comparator(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.first!=b.first)return a.first>b.first;
    else return a.second>b.second;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<ll,ll>mp;
        ll x;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            mp[x]++;
        }
        vector<pair<ll,ll>>v;
        for(auto it:mp)
        {
            v.push_back({it.second,it.first});
        }
        sort(begin(v),end(v),comparator);
        ll alic=0,bob=0;
        bool flag=0;
        for(int i=0; i<v.size(); i++)
        {
            ll s=v[i].second/2;
            ll check=v[i].second;
            if(flag==0){
                if(check%2){
                    alic+=(s+1)*(v[i].first);
                    bob+=s*v[i].first;
                    flag=1;
                }
                else{
                    alic+=s*v[i].first;
                    bob+=s*v[i].first;
                    flag=0;
                }
            }
            else{
                if(check%2){
                    bob+=(s+1)*v[i].first;
                    alic+=s*v[i].first;
                    flag=0;
                }
                else{
                    alic+=s*v[i].first;
                    bob+=s*v[i].first;
                    flag=1;
                }
            }

        }

        cout<<alic<<" "<<bob<<endl;
    }

    return 0;
}
