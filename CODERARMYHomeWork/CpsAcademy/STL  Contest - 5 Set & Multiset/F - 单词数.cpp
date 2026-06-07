#include<bits/stdc++.h>
using namespace std;
int main(){
        string str;
        getline(cin,str);
        if(str=="#")break;
        else{
          vector<string>str;
          istringstream val(str);
            string word;
            while(val>>word)str.push_back(word);
            cout<<str.size()<<endl;
        }

return 0;
}
