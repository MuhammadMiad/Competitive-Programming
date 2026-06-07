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
        char arr[2*n+1][2*n+1];
        memset(arr,'.',sizeof(arr));
        int co=0;
        for(int i=1; i<=2*n; i+=2)
        {
            co++;
            if(co%2==0)
            {
                for(int j=3; j<=2*n; j+=4)
                {
                    arr[i][j]='#';
                    arr[i+1][j]='#';
                    arr[i][j+1]='#';
                    arr[i+1][j+1]='#';
                }
            }
            else
            {
                for(int j=1; j<=2*n; j+=4)
                {
                    arr[i][j]='#';
                    arr[i+1][j]='#';
                    arr[i][j+1]='#';
                     arr[i+1][j+1]='#';
                }
            }

        }
        for(int i=1; i<=2*n; i++)
        {
            for(int j=1; j<=2*n; j++)
            {
                cout<<arr[i][j];
            }
            cout<<endl;
        }

    }

    return 0;
}
