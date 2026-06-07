#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
cin>>str;
vector<int>lps(str.size(),0);
int pre=0,suf=1;
while(suf<str.size()){
    if(str[pre]==str[suf]){
        lps[suf]=pre+1;
        pre++,suf++;
    }
    else if(pre==0){
        lps[suf]=0;
        suf++;
    }
    else pre=lps[pre-1];
}
cout<<lps[str.size()-1]<<endl;
cout<<str.substr(0,lps[str.size()-1]);

return 0;
}
