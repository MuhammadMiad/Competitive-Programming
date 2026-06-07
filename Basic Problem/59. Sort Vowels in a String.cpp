#include<bits/stdc++.h>
using namespace std;
string sortVowels(string s)
{
    vector<int>lower(26,0);
    vector<int>upper(26,0);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        {
            lower[s[i]-'a']++;
            s[i]='#';
        }
        else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            upper[s[i]-'A']++;
            s[i]='#';
        }
    }
    string ans;
    for(int i=0; i<26; i++)
    {
        char c='A'+i;
        while(upper[i])
        {
            ans+=c;
            upper[i]--;
        }
    }
    for(int i=0; i<26; i++)
    {
        char ch='a'+i;
        while(lower[i])
        {
            ans+=ch;
            lower[i]--;
        }
    }

    int first=0;
    int second=0;
    while(first<s.size())
    {
        if(s[first]=='#')
        {
            s[first]=ans[second];
            second++;
        }
        first++;
    }

    return s;
}
int main()
{
    string str="lEetcOde";
    string ans=sortVowels(str);
    cout<<ans<<endl;

    return 0;
}
