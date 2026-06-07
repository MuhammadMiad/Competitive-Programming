#include<bits/stdc++.h>
using  namespace std;
typedef long long int ll;
void MatrixMul(vector<vector<ll>>&Mat1,vector<vector<ll>>&Mat2)
{
    vector<vector<ll>>result(2,vector<ll>(2,0));
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            for(int k=0; k<2; k++)
            {
                result[i][j]+=Mat1[i][k]*Mat2[k][j];
            }
        }
    }
    Mat1=result;

}
void Fibo(vector<vector<ll>>&Iden,vector<vector<ll>>&Base,ll a,ll b,ll power)
{
    while(power)
    {
        if(power%2)
        {
            MatrixMul(Iden,Base);
            power--;
        }
        else
        {
            MatrixMul(Base,Base);
            power/=2;
        }

    }
    ll ans=a*Iden[0][1]+b*Iden[1][1];
    cout<<ans<<endl;
}

int main()
{
    int t;cin>>t;
    while(t--){
    ll a,b,power;
    cin>>a>>b>>power;
    vector<vector<ll>>Identity(2,vector<ll>(2,0));
    Identity[0][0]=1;
    Identity[1][1]=1;
    vector<vector<ll>>Base(2,vector<ll>(2,1));
    Base[0][0]=0;
    power--;
    Fibo(Identity,Base,a,b,power);
}
    return 0;
}
