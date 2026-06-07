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
        int arr[n];
        if(n%2==0)
        {
            for(int i=1; i<=n; i++)
            {
                if(i%2==0)
                {
                    arr[i-1]=i;
                }
                else
                {
                    arr[i+1]=i;
                }
            }

        }
        else
        {
            for(int i=1; i<=n; i++)
            {
                if(i==n)
                {
                    arr[i]=arr[i-1];
                    arr[i-1]=i;
                }
                else if(i%2==0)
                {
                    arr[i-1]=i;
                }
                else
                {
                    arr[i+1]=i;
                }
            }
        }
        for(int i=1;i<=n;i++){
            cout<<arr[i]<< " ";
        }
     cout<<endl;
    }

    return 0;
}
