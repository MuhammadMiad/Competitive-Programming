/**                               In the name Allah

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
        int value,x;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            if(i==0){
                value=abs(x);
            }
            arr[i]=abs(x);
        }
        if(n==1 || n==2)
        {
            cout<<"YES"<<endl;
            continue;
        }
        sort(begin(arr),end(arr));
        int index;
        for(int i=0; i<n; i++)
        {
            if(value==arr[i]){
             index=i;
             break;
            }

        }
        if(n/2>=index){
            cout<<"YES"<<endl;
            continue;
        }
        else cout<<"NO"<<endl;

    }
    return 0;
}




