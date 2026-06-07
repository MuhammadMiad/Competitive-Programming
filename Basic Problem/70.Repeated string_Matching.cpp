#include<bits/stdc++.h>
using namespace std;
void LPSfind(vector<int>&lps,string b)
{
    int pre=0,suf=1;
    while(suf<b.size())
    {
        //match
        if(b[pre]==b[suf])
        {
            lps[suf]=pre+1;
            suf++,pre++;
        }
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
bool KMP_LPS(string temp,string b)
{
    vector<int>lps(b.size(),0);
    LPSfind(lps,b);
    int first=0,second=0;
    while(first<temp.size() && second<b.size())
    {
        //match
        if(temp[first]==b[second])
        {
            first++,second++;
        }
        //NOt match
        else
        {
            if(second==0)first++;
            else
            {
                second=lps[second-1];
            }
        }
        if(second==b.size())return 1;

    }
    return 0;
}
int main()
{
    string a ="abcd",b="cdabcdab";
    if(a==b){
    cout<<"True"<<endl;
    return 0;
    }
    string temp=a;
    int repeat=1;
    while(temp.size()<b.size())
    {
        temp+=a;
        repeat++;
    }

    if(KMP_LPS(temp,b)==1)
    {
        cout<<"True"<<endl;
        return 0;
    }
    temp+=a;
    if(KMP_LPS(temp,b)==1)
    {
        cout<<"True"<<endl;
        return 0;
    }

    cout<<"False"<<endl;

    return 0;
}
