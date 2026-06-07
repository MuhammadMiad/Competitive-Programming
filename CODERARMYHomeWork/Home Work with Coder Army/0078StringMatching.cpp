#include<bits/stdc++.h>
using namespace std;
void LongestPS(vector<int>&lps,string str){
           int pre=0,suf=1;
           while(suf<str.size()){
             if(lps[suf]==lps[pre]){
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
}
int main(){
    string str1;
    string str2;
    cin>>str1>>str2;
    vector<int>lps(str2.size(),0);
    LongestPS(lps,str2);

    int first=0,second=0;
    while(first<str1.size() and second<str2.size()){
        if(str1[first]==str2[second]){
            first++,second++;
        }
        else{
            if(second==0){
                first++;
            }
            else second=lps[second-1];
        }
    }
    cout<<str1.substr(first-second,first)<<endl;
    if(second==str2.size())cout<<first-second<<endl;
    else cout<<-1<<endl;

return 0;
}
