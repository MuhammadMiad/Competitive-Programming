#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cin>>str;
stack<char>st;
for(int i=0;i<str.size();i++){
    if(st.empty())st.push(str[i]);
    else if(st.top()==str[i])st.pop();
    else st.push(str[i]);
}
string ss="";
while(!st.empty()){
   ss+=st.top();
    st.pop();
}
reverse(ss.begin(),ss.end());
cout<<ss<<endl;


return 0;
}
