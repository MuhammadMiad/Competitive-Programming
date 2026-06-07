#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    int mx=0,cnt=0;
    for(int i=0; i<n*2; i++)
    {
        int x;
        cin>>x;
        mp[x]++;
        if(mp[x]!=2){
            cnt++;
            mx=max(mx,cnt);
        }
        else cnt--;


    }
    cout<<mx<<endl;

    return 0;
}
