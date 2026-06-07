#include<bits/stdc++.h>
using namespace std;
int main(){
string  str[]={"ab","ac","da","da","ac","db","ca"};
int n=sizeof(str)/sizeof(str[0]);

stack<string>st;
for(int i=0;i<n;i++){
    if(st.empty())st.push(str[i]);
    else if(str[i]==st.top())st.pop();
    else st.push(str[i]);
}
cout<<"After String Manipulation length: "<< st.size()<<endl;
return 0;
}
