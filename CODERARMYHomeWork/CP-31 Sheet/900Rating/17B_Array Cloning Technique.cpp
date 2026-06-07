#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
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
        for(int i=0; i<n; i++){
            cin>>x;
            mp[x]++;
        }

        if(n==1)
        {
            cout<<0<<endl;
            continue;
        }

        ll cnt=0;
        for(auto it:mp)cnt=max(cnt,it.second);
        if(cnt==n)
        {
            cout<<0<<endl;
            continue;
        }
        ll total=0;
        n-=cnt;
        while(n)
        {
            if(cnt<n)
            {   total++;
                total+=cnt;
                n-=cnt;
                cnt+=cnt;
            }
            else
            {   total++;
                total+=n;
                n=0;
                break;
            }

        }

        cout<<total<<endl;
    }


    return 0;
}
