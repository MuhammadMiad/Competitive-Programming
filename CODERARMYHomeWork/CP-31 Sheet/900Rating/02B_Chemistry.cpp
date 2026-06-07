#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;


        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[str[i]]++;
        }
        int cnt=0;
        for(auto it:mp){
        if(it.second%2)cnt++;
        }
        if(cnt)cnt-=1;
        if(cnt<=k)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;



    }

    return 0;
}
