#include<bits/stdc++.h>
using namespace std;
int main(){
string str1="hd#dp#czsp#####";
string str2="hd#dp#czsp######";

stack<char>st1;
stack<char>st2;
for(int i=0;i<str1.size();i++){
    if(str1[i]!='#')st1.push(str1[i]);
    else{
        if(!st1.empty())st1.pop();
    }
}
for(int i=0;i<str2.size();i++){
    if(str2[i]!='#')st2.push(str2[i]);
    else{
        if(!st2.empty())st2.pop();
    }
}
if(st1.size()!=st2.size()){
    cout<<"False"<<endl;
    return 0;
}
else{
    while(!st1.empty()&&!st2.empty()){
        if(st1.top()!=st2.top()){
            cout<<"False"<<endl;
            return 0;
        }
        st1.pop(),st2.pop();
    }
    cout<<"True"<<endl;
}
return 0;
}
