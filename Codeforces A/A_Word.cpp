#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=0,c1=0;
    string s,s1="";
    cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(islower(s[i]))
            c++;
        else
            c1++;
    }

    for(int i=0; i<s.size(); i++)
    {
        if(c>c1)
        {
            s[i]=tolower(s[i]);
            s1+=s[i];

        }

        else if(c==c1)
        {
            s[i]=tolower(s[i]);
            s1+=s[i];
        }

        else
        {
            s[i]=toupper(s[i]);
            s1+=s[i];
        }
    }


    cout<<s1<<endl;

    return 0;
}
