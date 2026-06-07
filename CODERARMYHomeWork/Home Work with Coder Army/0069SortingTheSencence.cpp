#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    map<int,string>mp;
    string s;
    for(int i=0;i<str.size();i++){

        if(str[i]==' '){
            int x=str[i-1]-'0';
            s.pop_back();
            mp[x]=s;
            s.clear();
        }
        else s+=str[i];
    }
    int x=s[s.size()-1]-'0';
    s.pop_back();
    mp[x]=s;
    string sss;
    for(auto it:mp){
       sss+=it.second;
       sss+=' ';
    }
    sss.pop_back();
    cout<<sss<<endl;


return 0;
}
