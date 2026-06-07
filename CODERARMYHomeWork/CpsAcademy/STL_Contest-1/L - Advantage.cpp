#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n),brr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        brr=arr;
        sort(brr.begin(),brr.end());

        for(int i=0; i<n; i++)
        {
            if(arr[i]!=brr[n-1])cout<<arr[i]-brr[n-1]<<" ";
            else cout<<arr[i]-brr[n-2]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
