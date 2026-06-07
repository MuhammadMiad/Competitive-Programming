#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        string str;
        cin>>str;
        int u=0,d=0,r=0,l=0;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]=='U')u++;
            else if(str[i]=='D')d++;
            else if(str[i]=='R')r++;
            else l++;
        }

        if((x>=0 and y>=0) and (r>=x and u>=y))cout<<"YES"<<endl;
        else if((x>=0 and y<=0 )and (r>=x and d>=abs(y)))cout<<"YES"<<endl;
        else if((x<=0 and y>=0) and (l>=abs(x) and u>=y))cout<<"YES"<<endl;
        else if((x<=0 and y<=0) and (l>=abs(x) and d>=abs(y)))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
