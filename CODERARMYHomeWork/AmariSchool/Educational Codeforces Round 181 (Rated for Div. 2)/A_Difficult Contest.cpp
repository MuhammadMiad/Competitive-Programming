#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        if(str.size()<=2)
        {
            cout<<str<<endl;
            continue;
        }
        int flag=0;
        map<char,int,greater<int>>mp;
        for(int i=0; i<str.size()-2; i++)
        {
            if(str[i]=='F' and str[i+1]=='F' and str[i+2]=='T')
            {
                flag=1;
            }
            else if(str[i]=='N' and str[i+1]=='T' and str[i+2]=='T')
            {
                flag=1;
            }
           mp[str[i]]++;
        }
        mp[str[str.size()-1]]++;
        mp[str[str.size()-2]]++;

        if(!flag){
            cout<<str<<endl;
            continue;
        }

        for(auto it:mp){
            while(it.second--){
                cout<<it.first;
            }
        }
        cout<<endl;

    }

    return 0;
}
