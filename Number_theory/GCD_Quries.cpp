#include<bits/stdc++.h>
using  namespace std;
int GCD(int a, int b)
{
    if(b==0) return a;
    return GCD(b,a%b);

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr[m+1];
        for(int i=1; i<=m; i++)cin>>arr[i];
        int pre[m+2];
        pre[0]=0;
        for(int i=1; i<=m; i++)pre[i]=GCD(pre[i-1],arr[i]);
        int pos[m+3];
        pos[n+1]=0;
        for(int i=n; i>=1; i--)pos[i]=GCD(pos[i+1],arr[i]);
        while(n--)
        {
            int l,r;
            cin>>l>>r;
            int ans=GCD(pre[l-1],pos[r+1]);
            cout<<ans<<endl;
        }
    }
    return 0;
}
