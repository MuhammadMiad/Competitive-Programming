#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,co=0,cou=0;
    char m;
    cin>>n;
string s="";
for(int i=0;i<n;i++){
        cin>>m;
    s+=m;
}
for(int i=0;i<s.size();i++){
    if(s[i]=='D')
        co++;
    else if(s[i]=='A')
        cou++;
}
if(co==cou)
    cout<<"Friendship" <<endl;
else if(co>cou)
    cout<<"Danik"<<endl;
else
    cout<< "Anton"<<endl;


return 0;
}
