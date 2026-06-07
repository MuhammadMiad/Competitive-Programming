#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string str;
cin>>str;
set<int>st;
for(int i=0;i<n;i++){
    char ch=tolower(str[i]);
    st.insert(ch);
}
if(st.size()==26)cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;
}
