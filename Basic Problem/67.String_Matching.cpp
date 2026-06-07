#include<bits/stdc++.h>
using namespace std;
void lpsfind(vector<int>&lps,string str)
{
    int pre=0,suf=1;
    while(suf<str.size())
    {
        //match
        if(str[pre]==str[suf])
        {
            lps[suf]=pre+1;
            suf++,pre++;
        }
        //Not Match
        else
        {
            if(pre==0)
            {
                lps[suf]=0;
                suf++;
            }
            else
            {
                pre=lps[pre-1];
            }
        }
    }

}
int main()
{
    string  haystack = "miadsadbutsad", needle = "sad";

    vector<int>lps(needle.size(),0);
    lpsfind(lps,needle);
    int first=0,second=0;
    while(first<haystack.size()&&second<needle.size())
    {
        //match
        if(haystack[first]==needle[second])
        {
            first++,second++;
        }
        //Not match
        else
        {
            if(second==0)first++;
            else second=lps[second-1];
        }
    }
    if(second==needle.size())cout<<first-second<<endl;
    else cout<<"-1"<<endl;


    return 0;
}
