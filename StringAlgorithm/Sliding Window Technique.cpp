#include<bits/stdc++.h>
using namespace std;
int main(){
string s,t;
cin>>s>>t;
int ans=0;
string s1;
for(int i=0;i<t.size();i++){
    s1+=s[i];
}
if(s1==t)ans++;
for(int i=t.size();i<s.size();i++){
    s1+=s[i];
    s1.erase(s1.begin());
    if(s1==t)ans++;
}

cout<<ans<<endl;

return 0;
}
