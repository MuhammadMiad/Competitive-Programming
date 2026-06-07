#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<int,int>mp;
int main()
{
    ll n,x;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    ll cnt=0;
    for(int i=0; i<n; i++)
    {

        for(int p=0; p<=30; p++)
        {
             ll po=pow(2,p);
           /// ll po=(1<<p);
            ll need=po-arr[i];
            cnt+=mp[need];
        }
        mp[arr[i]]++;
    }
cout<<cnt<<endl;


    return 0;
}
