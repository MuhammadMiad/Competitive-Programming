#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,ss;
    cin>>s>>ss;
    cout<<s.size()<<" "<<ss.size()<<endl;
    cout<<s<<ss<<endl;
    char ch=s[0];
    char c=ss[0];
    s[0]=c;
    ss[0]=ch;
    cout<<s<<" "<<ss<<endl;


return 0;
}
