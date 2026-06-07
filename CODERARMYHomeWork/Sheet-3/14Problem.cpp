#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
string str;
cin>>str;
int cnt=0;
for(int i=0;i<str.size();i++){
    if(str[i]!='-')cnt++;
}
if(a+b==cnt and str[a]=='-')cout<<"Yes"<<endl;
else cout<<"No"<<endl;


return 0;
}
