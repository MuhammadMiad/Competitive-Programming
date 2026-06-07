#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    vector<int>cnt(26,0);
    int first=0,second=0,len=0;
    while(second<str.size()){
        while(cnt[str[second]-'a']){
            cnt[str[first]-'a']=0;
            first++;
        }
        cnt[str[second]-'a']=1;
        second++;

        len =max(len,second-first);
    }
    cout<<len<<endl;



return 0;
}
