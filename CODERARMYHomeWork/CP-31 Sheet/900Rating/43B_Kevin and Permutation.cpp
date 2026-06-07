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
        if(k==1){
            for(int i=1;i<=n;i++)cout<<i<<" ";
            cout<<endl;
            continue;
        }

        int c=n/k;
        int cnt=0;
        int i=c+1;
        int j=1;
        while(i<=n)
        {
            cnt++;
            if(cnt==k)
            {
                cout<<j++<<" ";
                cnt=0;
            }
            else cout<<i++<<" ";
        }
        if(n%k==0)cout<<j<<endl;
        else cout<<endl;
    }

    return 0;

}
