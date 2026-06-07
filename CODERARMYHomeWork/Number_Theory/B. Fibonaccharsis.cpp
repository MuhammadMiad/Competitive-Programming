#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(k>30)
        {
            cout<<0<<endl;
            continue;
        }
        int ans=0;
        for(int i=0; i<=n; i++)
        {
            int second=n;
            int first=i;
            bool flag=true;
            for(int j=0; j<k-2; j++)
            {
                int temp=second-first;
                second=first;
                first=temp;
                if(first<=second and first>-1)
                {
                    continue;
                }
                else
                {
                    flag=!flag;
                    break;
                }
            }
            if(flag)ans++;
        }
        cout<<ans<<endl;

    }


    return 0;
}
