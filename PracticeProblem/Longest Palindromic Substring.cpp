#include<bits/stdc++.h>
using namespace std;
string LPS(string s){
if(s.size()<=1)return s;

int n=s.size();
string len="";
for(int i=1;i<n;i++){

///Odd length string
  int low=i;
  int high=i;
  while(s[low]==s[high]){
    low--;
    high++;
    if(low==-1||high==n)break;
  }

  string pal;
  for(int l=low+1;l<high;l++)pal+=s[l];
  if(len.size()<pal.size()){
    len=pal;
  }

  ///Even length
  low=i-1;
  high=i;
  while(s[low]==s[high]){
    low--;
    high++;
    if(low==-1||high==n)break;

  }
  pal="";
  for(int l=low+1;l<high;l++)pal+=s[l];
  if(len.size()<pal.size()){
    len=pal;
  }
}
return len;
}
int main(){
 string str="EBBABAD";
 string ans=LPS(str);
 cout<<ans<<endl;

return 0;
}
