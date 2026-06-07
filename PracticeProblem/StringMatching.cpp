#include<bits/stdc++.h>
using namespace std;
void LpsFind(vector<int>&lps,string &s){
int pre=0,suf=1;
while(suf<s.size()){
    if(s[pre]==s[suf]){
        lps[suf]=pre+1;
        suf++,pre++;
    }
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

}
int main(){
string s1,s2;
cin>>s1>>s2;
vector<int>lps(s2.size(),0);
LpsFind(lps,s2);
int first=0,second=0, co=0;
while(first<s1.size())
{
    if(s1[first]==s2[second]){
        first++,second++;
    }
    else{
        if(second==0){
            first++;
        }
        else second=lps[second-1];
    }

    if(second==s2.size()){
       co++;
       second=0;
    }


}

cout<<co<<endl;
return 0;
}
