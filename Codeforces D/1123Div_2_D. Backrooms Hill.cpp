#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve()
{
    ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0; i<n; i++)cin>>arr[i];

    vector<ll>even,odd;
    for(int i=0; i<n; i++)
    {
        if(i%2)odd.push_back(arr[i]);
        else even.push_back(arr[i]);
    }
    sort(rbegin(even),rend(even));
    sort(rbegin(odd),rend(odd));

    deque<pair<ll,ll>>ans;
    ll i=0,j=0,flag=0;
    while(i<even.size()  and j<odd.size())
    {
        if(even[i]>odd[j])
        {
            if(ans.empty() )
            {
                ans.push_back({even[i],0});
                i++;
            }
            else
            {
                if(ans.back().second%2)
                {
                    ans.push_back({even[i],0});
                    i++;
                }
                else if(ans.front().second%2)
                {
                    ans.push_front({even[i],0});
                    i++;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        else
        {
            if(ans.empty() )
            {
                ans.push_back({odd[j],1});
                j++;
            }
            else
            {
                if(ans.back().second%2==0 )
                {
                    ans.push_back({odd[j],1});
                    j++;
                }
                else if(ans.front().second%2==0)
                {
                    ans.push_front({odd[j],1});
                    j++;
                }
                else
                {
                    flag=1;
                    break;
                }
            }

        }

    }

    while(i<even.size())
    {
            if(ans.empty() )
            {
                ans.push_back({even[i],0});
                i++;
            }
            else
            {
                if(ans.back().second%2)
                {
                    ans.push_back({even[i],0});
                    i++;
                }
                else if(ans.front().second%2)
                {
                    ans.push_front({even[i],0});
                    i++;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
    }
    while(j<odd.size())
    {
       if(ans.empty() )
            {
                ans.push_back({odd[j],1});
                j++;
            }
            else
            {
                if(ans.back().second%2==0)
                {
                    ans.push_back({odd[j],1});
                    j++;
                }
                else if(ans.front().second%2==0 )
                {
                    ans.push_front({odd[j],1});
                    j++;
                }
                else
                {
                    flag=1;
                    break;
                }
            }
    }

    if(flag)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;


}
int main()
{
    int t;
    cin>>t;
    while(t--)solve();


    return 0;
}
