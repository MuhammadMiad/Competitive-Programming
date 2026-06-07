#include<bits/stdc++.h>
using namespace std;
void LowerToUpper(string &str,int index){
  if(index<0)return;
  str[index]='A'+(str[index]-'a');
  return LowerToUpper(str,index-1);
}
int main(){
    string str;
    cin>>str;
    LowerToUpper(str,str.size()-1);
    cout<<str<<endl;


return 0;
}
