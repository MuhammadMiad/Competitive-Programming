#include<bits/stdc++.h>
using namespace std;
int x[]= {-1,1,0,0};
int y[]= {0,0,-1,1};
bool check(int i,int j,int n)
{
    return(i>=0 and j>=0 and i<n and j<n);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<char>>arr;
        for(int i=0; i<n; i++)
        {
            vector<char>v(n);
            for(int j=0; j<n; j++)
            {
                cin>>v[j];
            }
            arr.push_back(v);
        }

        int flag=false;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                int cnt=0;
                if(arr[i][j]=='#')cnt++;
                for(int k=0; k<4; k++)
                {
                    if( check(i+x[k],j+y[k],n) and arr[i+x[k]][j+y[k]]=='#')
                    {
                        cnt++;
                    }
                }
                if(cnt>2)flag=true;
            }
        }
        if(flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }

    return 0;
}

