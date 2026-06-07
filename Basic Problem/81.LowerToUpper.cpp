#include<bits/stdc++.h>
using namespace std;
void LowerToUpp(string &str,int index){
   if(index<0)return;

   str[index]='A'+str[index]-'a';
   LowerToUpp(str,index-1);
}
int main(){
    string str="miadul";
    LowerToUpp(str,str.size()-1);
    cout<<str<<endl;

return 0;
}
