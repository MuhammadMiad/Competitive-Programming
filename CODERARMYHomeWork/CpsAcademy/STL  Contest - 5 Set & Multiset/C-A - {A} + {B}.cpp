#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
while(cin>>n>>m){
set<int>st;
int x;
for(int i=0;i<n+m;i++){
   cin>>x;
   st.insert(x);
}
for(auto &it:st)cout<<it<<" ";
cout<<endl;
}
return 0;
}
