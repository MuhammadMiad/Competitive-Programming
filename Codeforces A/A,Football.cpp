#include<bits/stdc++.h>
using namespace std;
int main(){
string  s;
cin>>s;
int result=0;
for(int i=0;i<s.size();i++){
    int  coun=0;
    if(s[i]=='0'){
        while(s[i]=='0'&& i<s.size()){
            coun++;
            i++;
        }
    }
    else{
        while(s[i]=='1' && i<s.size()){
            coun++;
            i++;
        }
    }
    i--;
    if(coun>=7)
        result=1;
}
if(result==1)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;

return 0;
}
