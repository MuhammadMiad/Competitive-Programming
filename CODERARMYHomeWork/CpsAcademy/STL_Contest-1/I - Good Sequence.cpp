#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin>>n;
    map<ll,ll>mp;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        mp[x]++;

    }
    ll sum=0;
    for(auto it:mp)
    {
        if(it.first!=it.second)
        {
            if(it.first<it.second)sum+=it.second-it.first;
            else sum+=it.second;
        }
    }
    cout<<sum<<endl;

    return 0;
}
