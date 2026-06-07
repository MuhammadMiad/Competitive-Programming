#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string ss="";
    for(int i=0;i<str.size();i++){
        char ch=tolower(str[i]);
        if(ch!='a' and ch!='e' and ch!='i' and ch!='o' and ch!='u' and ch!='y'){
            ss+='.';
            ss+=ch;
        }
    }
    cout<<ss<<endl;


return 0;
}
