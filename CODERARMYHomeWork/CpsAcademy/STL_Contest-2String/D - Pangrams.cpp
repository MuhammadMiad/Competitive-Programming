#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    vector<int>pan(26,0);
    for(int i=0;i<str.size();i++){
        if(str[i]!=' '){
            char ch=tolower(str[i]);
            pan[ch-'a']=1;
        }

    }
    int flag=0;
    for(int i=0;i<26;i++){
        if(pan[i]==0){
            flag=1;
            break;
        }
    }
    if(flag)cout<<"not pangram"<<endl;
    else cout<<"pangram"<<endl;

return 0;
}
