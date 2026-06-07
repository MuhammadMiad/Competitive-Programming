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
        vector<ll>arr(n+1);
        int flag=0;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            if(i==arr[i])flag=1;
        }
        if(flag)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(int i=1; i<=n; i++)
        {
            if(i>arr[i])
            {
                flag=1;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }

    return 0;
}
