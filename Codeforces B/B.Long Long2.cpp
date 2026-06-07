#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++) cin>>arr[i];
        ll sum=0,co=0;
        for(int i=0; i<n; i++)sum+=abs(arr[i]);
        bool  negValue=false;
        for(int i=0; i<=n; i++)
        {
            if(negValue)
            {
                if(i==n or arr[i]>0)
                {
                    co++;
                    negValue=false;
                }
            }
            else
            {
                if(arr[i]<0)
                {
                    negValue=true;
                }
            }
        }
        cout<<sum<< " "<<co<<endl;
    }


    return 0;
}
