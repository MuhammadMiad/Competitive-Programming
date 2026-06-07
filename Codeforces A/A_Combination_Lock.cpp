#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s,s1;
    cin>>s>>s1;
    int arr1[n];
    int arr2[n];
    for(int i=0; i<n; i++)
    {
        arr1[i]=int(s[i])-48;
        arr2[i]=int(s1[i])-48;
    }
    int sum,ans=0;
    for(int i=0; i<n; i++)
    {
        sum=abs(arr1[i]-arr2[i]);
        if(sum<=5)
        {
            ans+=sum;
        }
        else if(sum>5)
        {
            int co=0;
            int a=arr1[i];
            int b=arr2[i];
            if(a<b)
            {
                while(a!=b)
                {

                    if(a==-1)
                    {
                        a=9;
                    }
                    else
                    {
                        co++;
                        a--;
                    }
                }
            }
            else if(a>b)
            {
                while(a!=b)
                {
                    if(a==10)
                    {
                        a=0;
                    }
                    else
                    {
                        a++;
                        co++;
                    }

                }
            }

            ans+=co;

        }
    }
    cout<<ans<<endl;

    return 0;
}
