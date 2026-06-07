#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int cnt=0;
        while(n)
        {
            if((n&1)!=0)cnt++;
            n=n>>1;
        }
        int ans=0,mul=1;;
        while(cnt--)
        {
            ans+=mul;
            mul=mul*2;
        }
        cout<<ans<<endl;
    }

    return 0;
}
