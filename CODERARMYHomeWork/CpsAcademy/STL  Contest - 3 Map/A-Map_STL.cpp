#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<string,int>mp;
    while(t--)
    {   int n;
        cin>>n;
        if(n==1){
        string x;
        int y;
        cin>>x>>y;
        mp[x]+=y;
        }
        else if(n==2){
          string x;
          cin>>x;
          mp.erase(x);
        }
        else if(n==3){
        string x;
        cin>>x;
        cout<<mp[x]<<endl;
        }
    }
    return 0;
}
