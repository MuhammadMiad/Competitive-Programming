#include<bits/stdc++.h>
using namespace std;
int main(){
 string str;
 cin>>str;
 reverse(begin(str),end(str));
 string ss="";
 for(int i=0;i<str.size();i++){
    if(str[i]=='.')break;
    ss+=str[i];
 }
 reverse(begin(ss),end(ss));
 cout<<ss<<endl;
return 0;
}
