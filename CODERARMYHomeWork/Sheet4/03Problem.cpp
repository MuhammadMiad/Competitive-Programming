#include<bits/stdc++.h>
using namespace std;
int main(){
    string str1,str2;
    cin>>str1>>str2;
    long long cnt1=0,cnt2=0;
    for(int i=0;i<str1.size();i++){
        cnt1+=str1[i]-'a';
    }
    for(int i=0;i<str2.size();i++){
        cnt2+=str2[i]-'a';
    }
    if(cnt1<cnt2)cout<<str1<<endl;
    else cout<<str2<<endl;



return 0;
}
