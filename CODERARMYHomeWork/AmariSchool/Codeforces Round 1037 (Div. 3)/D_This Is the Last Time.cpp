#include<bits/stdc++.h>
using namespace std;
typedef long long int li;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        li n,k;
        cin>>n>>k;
        li l,r,real;
        vector<vector<li>>arr,arr1;
        int flag=0;
        while(n--)
        {
            cin>>l>>r>>real;
            if(l<=k and k<=r)flag=1;
            arr.push_back({l,r,real});
        }
        if(!flag)
        {
            cout<<k<<endl;
            continue;
        }

        li mx=k;
        while(1)
        {   sort(begin(arr),end(arr));
            int flag=0;
            for(int i=0; i<arr.size(); i++)
            {
                li ll=arr[i][0];
               li rr=arr[i][1];
                li rel=arr[i][2];
        //  cout<<ll<<" "<<rr<<" "<<rel<<" "<<k<<endl;
                if(ll<=k and k<=rr)
                {
                    mx=max(mx,rel);
                    //cout<<ll<<" "<<rr<<" "<<rel<<endl;
                    if(k<rel)k=rel;
                    flag=1;
                }
                else
                {
                    arr1.push_back({ll,rr,rel});
                }

            }
            if(!flag)break;
            arr.clear();
            for(int i=0; i<arr1.size(); i++)
            {
                li ll=arr1[i][0];
                li rr=arr1[i][1];
                li rel=arr1[i][2];
                arr.push_back({ll,rr,rel});
            }
            arr1.clear();
        }

        cout<<mx<<endl;

    }

    return 0;
}
