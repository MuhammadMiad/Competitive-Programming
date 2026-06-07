#include<bits/stdc++.h>
using namespace std;
void lps_find(vector<int>&lps,string b)
{
    int pre=0,suf=1;
    while(suf<b.size())
    {
        ///match
        if(b[pre]==b[suf])
        {
            lps[suf]=pre+1;
            suf++,pre++;
        }
        ///not match
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
bool KMP_lps(string a,string b)
{
    vector<int>lps(b.size(),0);
    lps_find(lps,b);
    int first=0,second=0;
    while(first<a.size() && second<b.size())
    {
        ///match
        if(a[first]==b[second])
        {
            first++,second++;
        }
        ///NOt matched
        else
        {
            if(second==0)
            {
                first++;
            }
            else second=lps[second-1];
        }
        if(b.size()==second)return 1;
    }
    return 0;
}
int main()
{
    string str="cdeabroab";
    string str2="abcde";

    ///atfirst copy then add
    str+=str;

    if(str==str2)
    {
        cout<<"True"<<endl;
        return 0;
    }
    if(KMP_lps(str,str2)==1)
    {
        cout<<"True"<<endl;
        return 0;
    }
    cout<<"False"<<endl;

    return 0;
}
