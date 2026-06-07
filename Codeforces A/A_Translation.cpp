#include<bits/stdc++.h>
using namespace std;
int main(){
    int co=0;
string s, t,m="";
cin>>s>>t;
for(int i=t.size()-1;i>=0;i--){
    m+=t[i];
}

for(int i=0;i<s.size();i++){

      if(s[i]==m[i]){
        co++;

   }
}
if(co==s.size())
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;

return 0;
}
