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
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int cnt=0;
        int i=0;
        int j=1;
        while(j<n){
            if(arr[i]+1<arr[j]){
                cnt++;
                i=j;
                j++;
            }
            else j++;
        }
        cnt++;

        cout<<cnt<<endl;
    }

    return 0;
}
