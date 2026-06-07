#include<bits/stdc++.h>
using namespace std;
int main(){
 int a,b;
 char ch;
 cin>>a>>ch>>b;
 if(ch=='>'&&a>b){
    cout<<"Right"<<endl;
 }
 else if(ch=='>'){
        cout<<"Wrong"<<endl;
 }
 else if(ch=='<'&a<b)cout<<"Right"<<endl;
 else if(ch=='<')cout<<"Wrong"<<endl;

 else if(ch=='='&a==b)cout<<"Right"<<endl;
 else if(ch=='=')cout<<"Wrong"<<endl;

return 0;
}
