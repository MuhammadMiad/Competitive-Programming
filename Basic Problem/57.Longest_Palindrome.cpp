#include<bits/stdc++.h>
using namespace std;
int longestPalindrome(string s)
{
    vector<int>lowercase(26,0),uppercase(26,0);
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='a')
        {
            lowercase[s[i]-'a']++;
        }
        else if(s[i]>='A')
        {
            uppercase[s[i]-'A']++;
        }

    }
    int count=0,odd=0;
    for(int i=0; i<26; i++)
    {
        if(lowercase[i]%2==0)count+=lowercase[i];
        else if(lowercase[i]%2==1)
        {
            count+=lowercase[i]-1;
            odd=1;
        }
        if(uppercase[i]%2==0)
        {
            count+=uppercase[i];
        }
        else if(uppercase[i]%2==1)
        {
            count+=uppercase[i]-1;
            odd=1;
        }
    }
    return count+odd;
}
int main()
{
    string str="abccccdd";
    int ans=longestPalindrome(str);
    cout<<"The longest palindrome length:"<<ans<<endl;
    return 0;
}
