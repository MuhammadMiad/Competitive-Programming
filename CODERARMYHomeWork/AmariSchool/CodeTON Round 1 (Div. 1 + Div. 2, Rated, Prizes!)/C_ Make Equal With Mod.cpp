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
        int one=0,zero=0,two=0;
        set<int>st;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            if(arr[i]==1)one=1;
            if(arr[i]==0)zero=1;
            if(arr[i]==2)two=1;
            st.insert(arr[i]);
        }
        if(st.size()==1){
            cout<<"YES"<<endl;
            continue;
        }
        if(one and zero)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(!one and !zero){
            cout<<"YES"<<endl;
            continue;
        }
        if(!one and zero){
            cout<<"YES"<<endl;
            continue;
        }
        if(one and !zero and two){
          cout<<"NO"<<endl;
          continue;
        }
        if(one and !zero and !two){
            int flag=0;
            sort(begin(arr),end(arr));
          for(int i=0;i<n-1;i++){
            if(abs(arr[i]-arr[i+1])==1){
                flag=1;
                break;
            }
          }
         if(flag)cout<<"NO"<<endl;
         else cout<<"YES"<<endl;
        }

    }


    return 0;
}

