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
        vector<ll>ans;
        ll p=10;
        for(int i=0; i<18; i++)
        {
            ll value=p+1;
            if(n%value==0)ans.push_back(n/value);
            p*=10;
        }
        if(ans.empty())cout<<0<<endl;
        else
        {
            cout<<ans.size()<<endl;
            sort(begin(ans),end(ans));
            for(auto it:ans)cout<<it<<" ";
            cout<<endl;
        }
    }
    return 0;
}

