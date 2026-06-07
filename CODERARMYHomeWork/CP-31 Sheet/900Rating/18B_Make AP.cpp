#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
//        if(abs(a-b)==abs(b-c))
//        {
//            cout<<"YES"<<endl;
//            continue;
//        }

        /**
           b-a==c-b
           2b=c+a
           a=2b-c
           c=2b-a

        **/

        if((c+a)%(2*b)==0 and c+a>0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if((2*b-c)%a==0 and 2*b-c>0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if((2*b-a)%c==0 and 2*b-a>0)
        {
            cout<<"YES"<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }


    return 0;
}
