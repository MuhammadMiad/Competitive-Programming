#include<bits/stdc++.h>
using namespace std;
int main(){
string str="((())))))";
stack<char>st;
int cnt=0;
for(int i=0;i<str.size();i++){
    if(str[i]=='('){
        st.push(str[i]);
    }
    else{
        if(st.empty()){
            cnt++;
        }
        else if(str[i]==')'&&st.top()=='(')st.pop();
    }
}
cout<<cnt+st.size()<<endl;
return 0;
}
