#include<bits/stdc++.h>
using namespace std;
void LPS(vector<int>&lps,string &str){
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
bool kmp_lps(string a,string b){
    vector<int>lps(b.size(),0);
    LPS(lps,b);
   int first=0,second=0;
   while(first<a.size() and second<b.size()){
    if(a[first]==b[second]){
        first++,second++;
    }
    else{
        if(second==0){
            first++;
        }
        else second=lps[second-1];
    }
   }
   if(second==b.size())return 1;
   else return 0;
}
int main(){
    string a,b;
    cin>>a>>b;
    if(a==b)cout<<"Repeated String Matched:"<<1<<endl;
    string temp=a;
    int repeat=1;
    while(temp.size()<b.size()){
        temp+=a;
        repeat++;
    }
    int flag=0;
    if(kmp_lps(temp,b)==1){
        cout<<"Repeated string matched:"<<repeat<<endl;
        flag=1;
    }
    temp+=a;
    if(kmp_lps(temp,b)==1){
        cout<<"Repeated string matched:"<<repeat+1<<endl;
        flag=1;
    }
    if(flag==0)cout<<"Not Matching String."<<endl;




return 0;
}
