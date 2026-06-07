#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
   ll n,k;
   while(cin>>n>>k){
   ///if distinct so take set nor take map
   set<ll>st;
   vector<ll>arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
    st.insert(arr[i]);
   }
   if(k==0){
    cout<<0<<endl;
    return 0;
   }
   int cnt=0;
   for(auto &p:st){
    if(st.find(p+k)!=st.end())cnt++;
   }
   cout<<cnt<<endl;
}
return 0;
}
