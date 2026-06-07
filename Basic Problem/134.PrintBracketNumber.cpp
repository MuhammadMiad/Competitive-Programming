#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="(aa(bdc))p(dee)";
    int cnt=0;
    vector<int>ans;
    stack<int>st;
    for(int i=0;i<str.size();i++){
        if(str[i]=='('){
            cnt++;
            st.push(cnt);
            ans.push_back(cnt);
           }
           else if(str[i]==')'){
                ans.push_back(st.top());
                st.pop();
           }
    }
    for(auto it:ans)cout<<it<<" ";

return 0;
}
