#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n=str.size();
    string rev=str;
    reverse(begin(rev),end(rev));
    str+='#';
    str+=rev;
    vector<int>lps(str.size(),0);
    int pre=0,suf=1;
    while(suf<str.size()){
        if(str[pre]==str[suf]){

            lps[suf]=pre+1;
            pre++,suf++;
        }
        else{
            if(pre==0){
                lps[suf]=0;
                suf++;
            }
            else pre=lps[pre-1];
        }
    }
    for(int i=0;i<lps.size();i++)cout<<lps[i]<<" ";
    cout<<endl;
    cout<<n-lps[lps.size()-1]<<endl;

return 0;
}
