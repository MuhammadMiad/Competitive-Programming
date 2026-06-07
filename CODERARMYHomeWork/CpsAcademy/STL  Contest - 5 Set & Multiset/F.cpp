#include<bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        string str;
        getline(cin,str);
        if(str=="#")break;
        else{
            vector<string>st;
            stringstream val(str);
            string word;
            while(val>>word){
                st.push_back(word);
            }
            cout<<st.size()<<endl;
        }
    }


return 0;
}
