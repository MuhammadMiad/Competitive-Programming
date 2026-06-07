#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    unordered_set<char>st;
    for(int i=0;i<str.size();i++){
        st.insert(str[i]);
    }
    if(st.size()==str.size())cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

return 0;
}
