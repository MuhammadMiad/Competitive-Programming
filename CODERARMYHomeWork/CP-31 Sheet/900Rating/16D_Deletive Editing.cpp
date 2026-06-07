#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str,str2;
        cin>>str>>str2;

        if(str==str2){
            cout<<"YES"<<endl;
            continue;
        }
        map<char,int>mp,mp2;
        for(int i=0;i<str.size();i++){
           mp[str[i]]++;
        }

        for(int i=0;i<str2.size();i++){
            mp2[str2[i]]++;
        }
        bool flag=0;
        for(int i=0;i<str2.size();i++){
            if(mp[str2[i]]<mp2[str2[i]])flag=1;
        }
        if(flag){
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<str.size();i++){
            if(mp2.find(str[i])!=mp2.end() and mp[str[i]]>mp2[str[i]]){
                mp[str[i]]--;
                str[i]='#';
            }
            else if(mp2.find(str[i])==mp2.end()) str[i]='#';
        }
        string ss="";
        for(int i=0;i<str.size();i++){
            if(str[i]!='#')ss+=str[i];
        }

        if(ss==str2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }


    return 0;
}
