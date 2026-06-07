#include<bits/stdc++.h>
using namespace std;
void rotateclock(string &s)
{
    char c=s[s.size()-1];
    int n=s.size()-2;
    while(n>=0)
    {
        s[n+1]=s[n];
        n--;
    }
    s[0]=c;

}
void rotateanticlock(string &s)
{
    char c=s[0];
    int n=s.size();
    int i=1;
    while(i<n)
    {
        s[i-1]=s[i];
        i++;
    }
    s[n-1]=c;

}
int main()
{
    string a="amazon";
    string b="azonam";
    string clock=b,anticlock=b;
    rotateclock(clock);
    rotateclock(clock);
    if(clock==a)
    {
        cout<<"Possible"<<endl;
        return 0;
    }

    rotateanticlock(anticlock);
    rotateanticlock(anticlock);
    if(anticlock==a)
    {
        cout<<"Possible"<<endl;
        return 0;
    }
    cout<<"Not Possible"<<endl;
    return 0;
}
