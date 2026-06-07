#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="(){}[]";
    stack<char>st;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='('||str[i]=='{'||str[i]=='[')
        {
            st.push(str[i]);
        }
        else
        {
            if(st.empty())
            {
                cout<<"Not Valid Parentheses."<<endl;
                return 0;
            }
            else if(str[i]==')'&&st.top()=='('||str[i]=='}'&&st.top()=='{'||str[i]==']'&&st.top()=='[')
            {
                st.pop();
            }
            else
            {
                cout<<"Not Valid Parentheses."<<endl;
                return 0;
            }
        }
    }
    if(st.size()==0)cout<<"Valid Parentheses."<<endl;
    else cout<<"Not Valid Parentheses"<<endl;

    return 0;
}
