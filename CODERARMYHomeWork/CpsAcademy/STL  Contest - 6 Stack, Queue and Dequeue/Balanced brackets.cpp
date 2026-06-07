#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    stack<char>st;
    bool check=true;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            st.push(str[i]);
        }
        else{
            if(st.empty()){
                check=false;
                break;
            }
            else if(str[i]==')'){
               if(st.top()=='(')st.pop();
               else{
                check=false;
                break;
               }
            }

    }

 }
    if(st.size())check=false;
    if(check)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;




return 0;
}

