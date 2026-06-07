#include<bits/stdc++.h>
using namespace std;
int lps(string str)
{
    vector<int>lps(str.size(),0);
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
    return lps[str.size()-1];
}
int main()
{
    string str="ABCABDABCABDABDAB";
    cout<<"Length of Longest prefix suffix :"<<lps(str)<<endl;
    return 0;
}
