#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
 cin>>t;
 vector<int>v;
 set<int>st;
 while(t--){
    int n;
    cin>>n;
   string s;
   cin>>s;
   for(int i=0;i<s.size();i++){
    st.insert(s[i]);
   }
   int ans=st.size()*2;
   v.push_back(ans+(s.size()-st.size()));
   st.clear();

 }

 for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
 }



return 0;
}
