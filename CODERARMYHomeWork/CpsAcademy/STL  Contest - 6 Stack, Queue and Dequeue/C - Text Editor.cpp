#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;cin>>str;
    stack<char>st1,st2;
    for(int i=0;i<str.size();i++){
        if(str[i]=='L'){
          if(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
          }
            continue;
        }
       else if(str[i]=='R'){
          if(!st2.empty()){
            st1.push(st2.top());
            st2.pop();
          }
          continue;
        }

        st1.push(str[i]);
    }
    string s="";
    while(!st1.empty()){
        s+=st1.top();
        st1.pop();
    }
    reverse(begin(s),end(s));
    while(!st2.empty()){
        s+=st2.top();
        st2.pop();
    }
    cout<<s<<endl;


return 0;
}
