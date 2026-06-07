#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<1<<endl;
        cout<<a<<endl;
    }
    else if(a>0 and b>0)
    {
        cout<<3<<endl;
        int x=a*3-b;
        if(x<0)cout<<-(b-x)<<" "<<b<<" "<<b<<endl;
        else cout<<-b<<" "<<b<<" "<<a*3<<endl;
    }
    else if(a==0)
    {
        cout<<3<<endl;
        if(b>0)cout<<-(b*2)<<" "<<b<<" "<<b<<endl;
        else cout<<b<<" "<<b<<" "<<-(b*2)<<endl;
    }
    else if(b==0)
    {
        cout<<3<<endl;

        int x=a*3;
        if(a<0)cout<<x<<" "<<b<<" "<<b<<endl;
        if(a>0)cout<<b<<" "<<b<<" "<<x<<endl;

    }
    else if(a<0 and b<0)
    {
        cout<<3<<endl;
        int x=a*3;
        if(x<b)cout<<x<<" "<<b<<" "<<-b<<endl;
        else cout<<0<<" "<<b<<" "<<(x-b)<<endl;
    }
    else if(a<0 and b>0)
    {
        cout<<3<<endl;
        cout<<3*a-b*2<<" "<<b<<" "<<b<<endl;
    }
    else if(b<0 and a>0)
    {
        cout<<3<<endl;
        cout<<-1+b<<" "<<b<<" "<<a*3+(-b)*2+1<<endl;
    }


    return 0;
}
