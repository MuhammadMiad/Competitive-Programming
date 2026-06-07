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

void solve()
{
    int x1,p1,x2,p2;
    cin>>x1>>p1>>x2>>p2;
    vector<int>arr,brr;
    while(x1)
    {
        arr.push_back(x1%10);
        x1/=10;
    }
    while(x2)
    {
        brr.push_back(x2%10);
        x2/=10;
    }


    if(arr.size()+p1!=brr.size()+p2)
    {
        cout<<(arr.size()+p1>brr.size()+p2?">":"<")<<endl;
    }
    else
    {
        reverse(begin(arr),end(arr));
        reverse(begin(brr),end(brr));

        if(arr.size()<=brr.size())
        {
            for(int i=0; i<arr.size(); i++)
            {
                if(arr[i]!=brr[i])
                {
                    cout<<(arr[i]>brr[i]?">":"<")<<endl;
                    return;
                }
            }
            int ext=brr.size()-arr.size();
            int flag=0;
            if(ext){
                int j=brr.size()-1;
                while(ext--){
                    if(brr[j--])flag=1;
                }
            }
            if(flag)cout<<"<"<<endl;
            else cout<<"="<<endl;

        }
        else if(brr.size()<arr.size())
        {
            for(int i=0; i<brr.size(); i++)
            {
                if(arr[i]!=brr[i])
                {
                    cout<<(arr[i]>brr[i]?">":"<")<<endl;
                    return;
                }
            }
            int ext=arr.size()-brr.size();
            int flag=0;
            if(ext){
                int j=arr.size()-1;
                while(ext--){
                    if(arr[j--])flag=1;
                }
            }
            if(flag)cout<<">"<<endl;
            else cout<<"="<<endl;
        }

    }

}
int main()
{
    Faster;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

