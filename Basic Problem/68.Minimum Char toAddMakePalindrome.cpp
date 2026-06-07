#include<bits/stdc++.h>
using namespace std;
int main(){
string str= "aacecaaa";
int n=str.size();
string rev=str;
reverse(rev.begin(),rev.end());
str+='&';
str+=rev;

vector<int>lps(str.size(),0);
int pre=0,suf=1;
while(suf<str.size()){
    ///Match
    if(str[pre]==str[suf]){
        lps[suf]=pre+1;
        suf++,pre++;
    }
    ///Not Matched
    else{
        if(pre==0){
            lps[suf]=0;
            suf++;
        }
        else{
            pre=lps[pre-1];
        }
    }
}

cout<<n-lps[str.size()-1]<<endl;
return 0;
}
