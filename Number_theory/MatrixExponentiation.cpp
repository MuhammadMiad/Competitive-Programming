#include<bits/stdc++.h>
#define N 100
const int X=100;
using namespace std;
typedef  unsigned long long int llu;
typedef   long long int ll;

ll M[N][N],I[N][N];
void  Matrix(ll A[][N],ll B[][N], ll n)
{
    ll Product[n+1][n+1];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            Product[i][j]=0;
            for(int k=0; k<n; k++)
            {
                ll x=(A[i][k]*B[k][j]);
                Product [i][j]+=x;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            A[i][j]=Product[i][j];
        }
    }
}
void power(ll M[][N], ll n, ll p)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                I[i][j]=1;
            }
            else
            {
                I[i][j]=0;
            }
        }
    }
    while(p)
    {
        if(p%2==1)
        {
            Matrix(I,M,n);
            p--;
        }
        else
        {
            Matrix(M,M,n);
            p/=2;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            M[i][j]=I[i][j];
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>M[i][j];
            }
        }
        power(M,n,p);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<< M[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
