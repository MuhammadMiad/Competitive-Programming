#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
     int n,mx=0;cin>>n;string str;
     cin>>str;
     vector<int>arr(n),brr(n);
     unordered_set<char>st;
     for(int i=0;i<n;i++){
        st.insert(str[i]);
        arr[i]=st.size();
     }
     st.clear();
     for(int i=n-1;i>=0;i--){
        st.insert(str[i]);
        brr[i]=st.size();
     }
     for(int i=0;i<n-1;i++){
        mx=max(mx,arr[i]+brr[i+1]);
     }

      cout<<mx<<endl;
    }


return 0;
}
