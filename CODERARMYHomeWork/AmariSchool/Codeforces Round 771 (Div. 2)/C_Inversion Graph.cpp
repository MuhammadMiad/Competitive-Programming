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
        for(int i=0; i<n; i++)cin>>arr[i];
        int index =max_element(begin(arr),end(arr))-begin(arr);
        if(arr[index]==arr[0]){
            cout<<1<<endl;
            continue;
        }
        vector<bool>visit(n,0);
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(!visit[arr[i]])
            {   cnt++;
                visit[arr[i]]=1;
                int flag=0;
                for(int j=i+1; j<n; j++)
                {
                    if(arr[i]>arr[j] and visit[arr[j]]==0){
                        visit[arr[j]]=1;
                    }
                    else if(arr[i]>arr[j] and visit[arr[j]]!=0 and flag==0 ){
                        cnt--;
                        flag=1;
                    }

                }

            }

        }
        cout<<cnt<<endl;

    }


    return 0;
}
