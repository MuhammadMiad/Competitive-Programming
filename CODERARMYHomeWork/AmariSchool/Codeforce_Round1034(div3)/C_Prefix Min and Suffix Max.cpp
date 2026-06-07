#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];

     vector<int>mn,mx;
     mn=arr;
     mx=arr;
     for(int i=1;i<n;i++)mn[i]=min(mn[i],mn[i-1]);
     for(int i=n-2;i>=0;i--)mx[i]=max(mx[i],mx[i+1]);

     set<int>st;
     for(int i=0;i<n;i++){
        st.insert(mn[i]);
        st.insert(mx[i]);
     }
     for(int i=0;i<n;i++){
        if(st.find(arr[i])!=st.end())cout<<1;
        else cout<<0;
     }
     cout<<endl;
    }


return 0;
}
