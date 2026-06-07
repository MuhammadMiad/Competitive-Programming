#include<bits/stdc++.h>
using namespace std;
int main(){
 string str="beabeefeab";
 vector<int>distinct(26,0);
 vector<char>ch;
 for(int i=0;i<str.size();i++){
    if(distinct[str[i]-'a']==0)ch.push_back(str[i]);
    distinct[str[i]-'a']++;
 }
vector<vector<int>>ans(ch.size(),vector<int>(ch.size(),0));

return 0;
}
