#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    unordered_set<char>check;
    stack<string>st;
    string curr="";
    int flag=1;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            st.push(curr);
            curr="";
        }
        else if(str[i]==')'){
           for(auto &p:curr){
            check.erase(p);
           }
           curr=st.top();
           st.pop();
        }
        else{
            if(check.count(str[i])){
                flag=0;
                break;
            }
            check.insert(str[i]);
            curr+=str[i];
        }
    }
    if(flag)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

return 0;
}
