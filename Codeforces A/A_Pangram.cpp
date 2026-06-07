#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
string s,s1="";
cin>>n;
cin>>s;
set<char>st;
for(int i=0;i<n;i++){
        if(isupper(s[i])){
            s1+=tolower(s[i]);
        }
      else
        s1+=s[i];
}
for(int i=0;i<n;i++){
    st.insert(s1[i]);
}

if(st.size()>=26)
    cout<<"YES"<<endl;

else
    cout<<"NO"<<endl;


return 0;
}
