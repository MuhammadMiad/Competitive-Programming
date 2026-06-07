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
        vector<vector<int>>arr(n,vector<int>(n));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>arr[i][j];
            }
        }
        ///left side
        int sum=0;
        for(int i=0; i<n; i++)
        {
            int index1=i;
            int index2=0;
            int mn=0;
            while(index1<n)
            {
                mn=min(mn,arr[index1][index2]);
                index1++;
                index2++;
            }
            sum+=abs(mn);

        }

        ///right side
        for(int i=1; i<n; i++)
        {
            int index1=0;
            int index2=i;
            int mn=0;
            while(index2<n)
            {
                mn=min(mn,arr[index1][index2]);
                index1++;
                index2++;
            }
            sum+=abs(mn);

        }
        cout<<sum<<endl;

    }

    return 0;
}
