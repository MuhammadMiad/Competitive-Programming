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
        vector<int>arr(n);
        int co=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            if(i>0 and arr[i]>arr[i-1])co++;
        }
        if(co==n-1){
            cout<<0<<endl;
            continue;
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }

        int cnt=0;
        int flag=0;
        for(int i=n-1; i>0; i--)
        {
            while(arr[i-1]>=arr[i])
            {
                arr[i-1]/=2;
                cnt++;
                if(arr[i-1]==0 and arr[i]==0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag)
        {
            cout<<-1<<endl;
        }
        else cout<<cnt<<endl;
    }


    return 0;
}
