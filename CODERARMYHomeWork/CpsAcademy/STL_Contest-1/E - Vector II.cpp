#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,q;
    cin>>n>>q;
    vector<ll>arr[n];
    while (q--)
    {
        ll t;
        cin >>t;
        if (t == 0)
        {
            ll a,x;
            cin >>a>>x;
            arr[a].push_back(x);
        }
        else if (t == 1)
        {
            ll x;
            cin>>x;
            if (arr[x].empty())
            {
                cout <<endl;
            }
            else
            {
                for (ll j = 0; j < arr[x].size(); j++)
                {
                    cout << arr[x][j];
                    if(j!=arr[x].size()-1)cout<<" ";
                }
                cout <<endl;
            }
        }
        else
        {
            ll x;
            cin>>x;
            arr[x].clear();
        }
    }

return 0;
}
