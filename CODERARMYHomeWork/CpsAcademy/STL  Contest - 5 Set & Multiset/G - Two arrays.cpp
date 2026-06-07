#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int m;
cin>>m;
unordered_set<int>st;
int x;
for(int i=0;i<m;i++){
    cin>>x;
    st.insert(x);
}

vector<int>ans;
for(auto &it:arr){
    if(st.find(it)==st.end())ans.push_back(it);
}

cout<<ans.size()<<endl;
for(auto &it:ans)cout<<it<<" ";
cout<<endl;


return 0;
}
