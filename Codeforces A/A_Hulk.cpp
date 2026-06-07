#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s="";
    cin>>n;
    if(n==1)
    {
        s="I hate it";
    }
    else if(n==2)
    {
        s="I hate that I love it";
    }
    else if(n%2==0)
    {
        for(int i=1; i<n/2; i++)
        {
            s+= "I hate that I love that ";
        }
        s+="I hate that I love it";
    }
        else if(n%2==1)
        {
            for(int i=1; i<=n/2; i++)
            {
                s+= "I hate that I love that ";
            }
            s+="I hate it";
        }
        cout<<s<<endl;

        return 0;
    }
