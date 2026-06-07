#include<bits/stdc++.h>
using namespace std;
int main(){
    string str="abcacdbd";

    string B="";
    vector<int>repeated(26,0);
    queue<char>q;
    for(int i=0;i<str.size();i++){
        ///repeated
        if(repeated[str[i]-'a']>=1){
            repeated[str[i]-'a']++;
        while(!q.empty()&&repeated[q.front()-'a']>1){
            q.pop();
        }
        if(q.empty()) B+='#';
        else B+=q.front();
        }
        ///Non repeated
        else{
            repeated[str[i]-'a']++;
            q.push(str[i]);
            while(repeated[q.front()-'a']>1){
                q.pop();
            }
            B+=q.front();
        }
    }
    cout<<B<<endl;

return 0;
}
