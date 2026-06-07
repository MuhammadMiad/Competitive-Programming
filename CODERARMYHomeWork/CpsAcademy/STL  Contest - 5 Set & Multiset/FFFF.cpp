#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main(){
    while(1){
        string str;
        getline(cin,str);
        if(str=="#")break;
        else{
          set<string>st;
           stringstream val(str);
            string word;
            while(val>>word)st.insert(word);
            cout<<st.size()<<endl;
        }

    }


return 0;
}
