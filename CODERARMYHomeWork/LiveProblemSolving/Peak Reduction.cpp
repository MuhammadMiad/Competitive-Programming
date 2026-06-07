#include<bits/stdc++.h>
using namespace std;
void solve(){
       int n;cin>>n;
       vector<int>arr(n);
       for(int i=0;i<n;i++){
        cin>>arr[i];
       }
       stack<int>st;
       st.push(arr[0]);
       int j=1;
       while(j<arr.size()-1){
           if(!(st.top()<arr[j] and arr[j]>arr[j+1])){
               st.push(arr[j]);
           }
           j++;
           if(j==n-1)st.push(arr[j]);
      }
      if(st.size()==2)cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
}
int main(){
       int t;cin>>t;while(t--)solve();
    return 0;
}
