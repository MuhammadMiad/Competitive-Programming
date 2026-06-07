#include<bits/stdc++.h>
using  namespace  std;
#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long int ll;
typedef unsigned long long int  llu;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int n;
        cin>>n;
        int ar[n+3];
        int zero=0,neg=0;
        vector<int>v;
        for(int i=1;i<=n;i++)
        {

            cin>>ar[i];
            if(ar[i]<0)neg++;
            if(ar[i]==0)v.push_back(i);

        }
        if(v.size()==0)
        {
            if(neg%2==0){
                //cout<<"aci"<<endl;
                cout<<"0 0"<<endl;
            }
            else
            {
                int ind1=-1,ind2=-1;
                for(int i=1;i<=n;i++)
                {
                    if(ar[i]<0)
                    {
                        ind1=i;
                        break;
                    }
                }
                for(int i=n;i>=1;i--)
                {
                    if(ar[i]<0)
                    {
                        ind2=i;
                        break;
                    }
                }
                ll p=0;
                for(int i=ind1+1;i<=n;i++)if(abs(ar[i])==2)p++;
                ll p1=0;
                for(int i=1;i<ind2;i++)if(abs(ar[i])==2)p1++;
                //cout<<ind1<<" "<<p<<" "<<ind2<<" "<<p1<<endl;
                if(p>=p1)cout<<ind1<<" "<<0<<endl;
                else
                {
                    cout<<0<<" "<<(n-ind2)+1<<endl;
                }
            }
        }
        else
        {
            int ans = 0;
            int x=n,y=0;
            int ind1=1;
            v.push_back(n+1);
            for(int j=0;j<v.size();j++)
            {
                //cout<<v[j]<<endl;
                int ind2=v[j]-1;
                ll p=0;
                int ng=0;
                int in1=-1,in2=-1,f=0;
                for(int i=ind1;i<=ind2;i++)
                {
                    if(abs(ar[i])==2)p++;
                    if(ar[i]<0)
                    {
                        if(f==0)
                        {
                            f=1;
                            in1=i;
                        }
                        ng++;
                        in2=i;
                    }
                }
                //cout<<p<<" "<<ng<<endl;
                if(ng%2==0)
                {
                    if(p>ans)
                    {
                        ans=p;
                        x=ind1-1;
                        y=n-ind2;
                    }
                }
                else
                {
                    ll p1=0,p2=0;
                    for(int i=in1+1;i<=ind2;i++)if(abs(ar[i])==2)p1++;
                    for(int i=ind1;i<in2;i++)if(abs(ar[i])==2)p2++;
                    //cout<<p1<<" "<<p2<<endl;
                    if(p1>=p2)
                    {
                        //cout<<in1<<endl;
                        if(p1>ans)
                        {
                            ans=p1;
                            x=in1;
                            y=n-ind2;
                        }
                    }
                    else
                    {
                        if(p2>ans)
                        {
                            ans=p2;
                            x=ind1-1;
                            y=(n-in2)+1;
                        }
                    }
                }
                ind1=v[j]+1;
            }
            cout<<x<<" "<<y<<endl;
        }

    }
}

