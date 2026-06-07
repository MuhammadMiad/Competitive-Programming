#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int solve(string &str,string &num)
{
    int j=num.size()-1;
   /// char e convert kori nai,because num[j] o int hoye zai automaticly
    int x=str[0];
    int y=str[1];
    int steps=0;
    while(j>0 and num[j]!=y)
    {
        j--;
        steps++;
    }
    int i=j-1;
    while(i>0 and num[i]!=x)
    {
        i--;
        steps++;
    }

    return steps;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%25==0)
        {
            cout<<0<<endl;
            continue;
        }
        vector<string>digits= {"00","25","50","75"};
        string num=to_string(n);
        ll mn=1e9+7;
        for(auto it:digits)
        {
            ll cnt=solve(it,num);
            mn=min(mn,cnt);
        }
        cout<<mn<<endl;

    }
    return 0;
}
