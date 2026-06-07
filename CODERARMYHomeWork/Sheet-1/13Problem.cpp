#include<bits/stdc++.h>
using namespace std;
int main(){
char ch;
cin>>ch;
int x=(int)ch;
if(48<=x&57>=x)cout<<"IS DIGIT"<<endl;
else if(65<=x&90>=x){
    cout<<"ALPHA"<<endl;
    cout<<"IS CAPITAL"<<endl;
}
else if(97<=x&122>=x){
    cout<<"ALPHA"<<endl;
    cout<<"IS SMALL"<<endl;
}

return 0;
}
