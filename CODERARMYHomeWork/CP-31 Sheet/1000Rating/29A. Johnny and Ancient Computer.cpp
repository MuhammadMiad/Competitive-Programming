#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        int cnt=0;
        while(a!=b)
        {
            int flag=0;
            if(a<b)
            {
                if(a*8<=b)
                {
                    a*=8;
                    flag=1;
                    cnt++;
                }
                else if(a*4<=b)
                {
                    a*=4;
                    flag=1;
                    cnt++;
                }
                else if(a*2<=b)
                {
                    a*=2;
                    flag=1;
                    cnt++;
                }
            }
            else
            {
                if(a%8==0 and a/8>=b)
                {
                    a/=8;
                    flag=1;
                    cnt++;
                }
                else if(a%4==0 and a/4>=b)
                {
                    a/=4;
                    cnt++;
                    flag=1;
                }
                else if(a%2==0 and a/2>=b)
                {
                    a/=2;
                    cnt++;
                    flag=1;
                }

            }
            if(!flag)break;
        }
        if(a!=b)cout<<-1<<endl;
        else cout<<cnt<<endl;
    }



    return 0;
}
