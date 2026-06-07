#include<bits/stdc++.h>
using namespace std;
void LPS(vector<int>&lps,string str){
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
}
int KMP_LPS(string temp,string str){
  vector<int>lps(str.size(),0);
  LPS(lps,str);
  int first=0,second=0;
  while(first<temp.size() and second<str.size()){
    if(temp[first]==str[second]){
        first++,second++;
    }
    else{
        if(second==0)first++;
        else second=lps[second-1];
    }
  }
  if(second==str.size())return 1;
  else return 0;
}
int main(){
string str1,str2;
cin>>str1>>str2;
string temp=str1;
temp+=str1;
if(KMP_LPS(temp,str1))cout<<"True"<<endl;
else cout<<"False"<<endl;

return 0;
}
