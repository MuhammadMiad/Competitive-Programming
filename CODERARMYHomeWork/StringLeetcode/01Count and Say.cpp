/*************In the name of Allah, the Most Gracious, the Most Merciful***************
*                                        Poet :                                       *
                                        Miad
*                                    (muhammadmiad)                                   *
|                               muhammadmiad25@gmail.com                               |
**************************************************************************************//*
                        I have a clumsy apprentice called Einstein.
*/#include<bits/stdc++.h>
using namespace std;
///data_type_compressions :
#define     ll                              long long int
#define     ull                             unsigned long long int
#define     ui                              unsigned int
///I/O :
#define     Faster                          ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define     INF                             LLONG_MAX
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)

///..............................................Let's Start with main function, shan't we.?......................................
string countAndSay(int n)
{
    if(n==1)return "1";
    string say=countAndSay(n-1);
    int i=0;
    string str;
    while(i<say.size())
    {
        char ch=say[i];
        int cnt=0;
        while(i<say.size() and ch==say[i])
        {
            i++;
            cnt++;
        }
        str+=to_string(cnt)+string(1,ch);
    }
    //cout<<say<<" "<<str<<endl;
    return str;
}

void solve()
{


}
int main()
{
    Faster;
    int n;
    cin>>n;
    cout<<countAndSay(n)<<endl;
    return 0;
}
