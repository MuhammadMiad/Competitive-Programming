#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n),b(n);
        int sum1=0,sum2=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum1+=a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
            sum2+=b[i];
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        cout<<sum1<<" "<<sum2<<" "<<abs(sum1-sum2)<<endl;
        long long int total=0;
        int x;
        if(sum1<sum2)
        {
             x=sum2-sum1;
            x/=2;
            while(1)
            {
                int flag=0;
                for(int i=0; i<n; i++)
                {
                    if(a[i]<b[i] and b[i]-a[i]<=x)
                    {
                        x-=b[i]-a[i];
                        swap(a[i],b[i]);
                        flag=1;
                    }
                    if(x==0)break;
                }
                if(!flag)break;
            }

            for(int i=0; i<n-1; i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    total+=(a[i]+a[j])*(a[i]+a[j]);
                }
            }

            for(int i=0; i<n-1; i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    total+=(b[i]+b[j])*(b[i]+b[j]);
                }
            }

        }
        else if(sum1>sum2)
        {
            int x=sum1-sum2;
            x/=2;
            while(1)
            {
                int flag=0;
                for(int i=0; i<n; i++)
                {
                    if(a[i]>b[i] and a[i]-b[i]<=x)
                    {
                        x-=a[i]-b[i];
                        swap(a[i],b[i]);
                        flag=1;
                    }
                    if(x==0)break;
                }
                if(!flag)break;
            }

            for(int i=0; i<n-1; i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    total+=(a[i]+a[j])*(a[i]+a[j]);
                }
            }

            for(int i=0; i<n-1; i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    total+=(b[i]+b[j])*(b[i]+b[j]);
                }
            }

        }
        else
        {
            for(int i=0; i<n-1; i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    total+=(a[i]+a[j])*(a[i]+a[j]);
                }
            }

            for(int i=0; i<n-1; i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    total+=(b[i]+b[j])*(b[i]+b[j]);
                }
            }
        }

        cout<<total<<endl;

    }


    return 0;
}
