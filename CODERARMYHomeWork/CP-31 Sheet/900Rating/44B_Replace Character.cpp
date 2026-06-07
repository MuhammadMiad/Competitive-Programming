#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string str;
        cin>>n>>str;
        map<char,int>mp;
        char small='z',big='A';
        for(int i=0;i<str.size();i++){
            mp[str[i]]++;
            small=min(small,str[i]);
            big=max(big,str[i]);
        }
        int mn=100;
        int mx=0;
        char c,ch;
        for(auto it:mp){
          if(it.second<mn){
            mn=it.second;
            c=it.first;
          }
          if(it.second>mx){
            mx=it.second;
            ch=it.first;
          }
        }

        if(mn==mx){
           for(int i=0;i<str.size();i++){
            if(str[i]==small){
                str[i]=big;
                break;
            }
        }
        }
        else{
            for(int i=0;i<str.size();i++){
            if(str[i]==c){
                str[i]=ch;
                break;
            }
        }
        }

        cout<<str<<endl;
    }


return 0;
}
