#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
map<char,int>mp;
for(int i=0;i<s.size();i++){
    if(s[i]>='A'&&s[i]<='Z') mp[s[i]]++;
}
int co=0;
for(auto it:mp){
        if((it.second)%2==1)co++;
    cout<<it.first<<"  "<<it.second<<endl;
}
cout<<co<<endl;



return 0;
}
