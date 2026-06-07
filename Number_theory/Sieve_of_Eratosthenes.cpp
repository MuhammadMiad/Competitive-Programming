#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

void sieve(ll n)
{
    ll prime[n+3];   /**In Declaration Array size maximum 99999/1e5**/
    memset(prime,0,sizeof(prime));
    for(int i=2; i*i<n; i++)
    {
        if(prime[i]==0)
        {
            for(int j=i+i; j<=n; j+=i)
            {
                prime[j]=1;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;

}
int main()
{
    ll n;
    cout<<"Enter  value::"<<endl;
    cin>>n;
    sieve(n);
    return 0;
}
