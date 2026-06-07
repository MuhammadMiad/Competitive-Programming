#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    istringstream temp(str);
    string word;
    vector<string>ss;
    while(temp>>word){
      ss.push_back(word);
    }
    map<int,string>mp;
    for(int i=0;i<ss.size();i++){
        string w=ss[i];
        int index=w[w.size()-1]-'0';
        w.pop_back();
        mp[index]=w;
    }
    string s;
    for(auto it:mp){
        s+=it.second;
        s+=' ';
    }
    s.pop_back();
    cout<<s<<endl;

return 0;
}
