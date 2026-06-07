#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,k;
        cin>>x>>k;
        int cn=20;
        while(cn--)
        {
            ll st=x;
            ll sum=0;
            while(st)
            {
                ll rem=st%10;
                sum+=rem;
                st/=10;
            }
            if(sum%k==0)
            {
                cout<<x<<endl;
                break;
            }
            x++;

        }

    }


    return 0;
}
