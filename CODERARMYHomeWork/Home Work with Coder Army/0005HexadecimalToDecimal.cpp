#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cout<<"Enter Hexadecimal Number:";
cin>>str;
int ans=0,mul=1;
while(str.size()){
    int rem=(int)str[str.size()-1];
    //cout<<rem<<endl;
    str.pop_back();
    if(rem>64)
    ans+=(rem-65+10)*mul;
    else
    ans+=(rem-48)*mul;

    mul*=16;
}
cout<<ans<<endl;


return 0;
}
