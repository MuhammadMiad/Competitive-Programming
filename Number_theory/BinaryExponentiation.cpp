#include<bits/stdc++.h>
using namespace std;
typedef long long int llu;
typedef unsigned long long int  ll;

llu  power(llu base, llu  pow,llu mod)
{
    llu result=1;
    while(pow!=0)
    {
        if(pow%2==1)
        {
            result=(result*base)%mod;
            pow--;
        }
        else
        {
            base=(base*base)%mod;
            pow/=2;
        }
    }
    return result;
}
int main()
{
    int b,p;
    cin>>b>>p;
    cout<<power(b,p,1e9)<<endl;

    return 0;
}
