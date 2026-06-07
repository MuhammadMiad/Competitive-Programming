#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
char initialpos='a';

int co=0;
for(int i=0;i<s.size();i++){
    int  x= min(abs(initialpos-s[i]),26-abs(initialpos-s[i]));
    co+=x;
    initialpos=s[i];
}


cout<<co<<endl;


return 0;
}
