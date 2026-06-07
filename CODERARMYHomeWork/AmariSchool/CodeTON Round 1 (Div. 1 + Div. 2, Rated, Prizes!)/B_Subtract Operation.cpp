#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            mp[arr[i]]--;
            int a=arr[i]+k;
            int b=arr[i]-k;
            if(mp[a]>0||mp[b]>0){
                ans=1;
                break;
            }
            mp[arr[i]]++;
        }
        if(ans)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }

    return 0;
}
