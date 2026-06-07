#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    if(k==0)
    {
        cout<<-1<<endl;
    }
    else if(k==1)
    {
        for(int i=1;i<=n;i++)cout<<i<<" ";
        cout<<endl;
    }
    else
    {
        vector<int>arr(n+2);
        for(int i=1;i<=n;i++)arr[i]=i;
//        for(int i=1;i<=n;i++)cout<<arr[i]<<" ";
//        cout<<endl;
        if(k%2){
             int cnt=1;
            for(int i=2;i<=n;i+=2){
              if(cnt<k){
                swap(arr[i],arr[i+1]);
                cnt+=2;
              }
            }
        }
        else{
            int cnt=0;
            for(int i=1;i<=n;i+=2){
                if(cnt<k){
                    swap(arr[i],arr[i+1]);
                    cnt+=2;
                }
                else break;
            }

        }
        for(int i=1;i<=n;i++)cout<<arr[i]<<" ";
        cout<<endl;

    }


    return 0;
}
