/**                            In the name of allah
                                      Miad
                                handle:muhammadmiad
                               muhammadmiad25@gmail.com
*/#include<bits/stdc++.h>
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
        vector<int>brr(n);
        int mn=INT_MAX,mx=-1;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mn=min(mn,arr[i]);
            mx=max(mx,arr[i]);
        }
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            cin>>brr[i];
            if(brr[i]<0)cnt++;
        }


        if(cnt==n){
          cout<<(mn+k)-mx+1<<endl;
          continue;
        }

        int sum = -1;
        for (int i = 0; i < n; i++)
        {
            if (brr[i] != -1)
            {
                sum = arr[i] + brr[i];
                break;
            }
        }

        int flag=0;
        for (int i = 0; i < n; i++)
        {
            if (brr[i] != -1)
            {
                if (arr[i] + brr[i] != sum)
                {
                    cout << 0 <<endl;
                    flag=1;
                    break;
                }
            }
            else
            {
                int need = sum - arr[i];
                if (need < 0 || need > k)
                {
                    cout << 0 <<endl;
                    flag=1;
                    break;
                }
            }
        }
        if(!flag)cout << 1 <<endl;

    }
    return 0;
}
