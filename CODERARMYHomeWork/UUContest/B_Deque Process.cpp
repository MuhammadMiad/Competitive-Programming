#include<bits/stdc++.h>
using namespace std;
typedef long long int  ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        deque<ll>q;
        ll x;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            q.push_back(x);
        }
        bool flag=true;
        while(!q.empty())
        {
            if(flag)
            {
                if(q.front()>q.back())
                {
                    cout<<'L';
                    q.pop_front();
                }
                else
                {
                    cout<<'R';
                    q.pop_back();
                }
            }
            else
            {
                if(q.front()<q.back())
                {
                    cout<<'L';
                    q.pop_front();
                }
                else
                {
                    cout<<'R';
                    q.pop_back();
                }
            }

            flag=!flag;
        }
        cout<<endl;

    }

    return 0;
}
