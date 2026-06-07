#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int neg=0,pos=0,x,cnt=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(x==-1)neg++;
            if(x==1)pos++;
        }
        while(1)
        {

            if(neg<=pos and neg%2==0)
            {
                break;
            }
            neg--;
            pos++;
            cnt++;

        }
        cout<<cnt<<endl;


    }


    return 0;
}
