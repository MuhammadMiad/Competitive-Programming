#include<bits/stdc++.h>
using namespace std;
void UpperCase(string &str,int start){
 if(start<0)return ;
 str[start]='A'+str[start]-'a';
 UpperCase(str,start-1);

}
int main(){
string str;
getline(cin,str);
UpperCase(str,str.size()-1);
cout<<"UpperCase String :"<<str<<endl;


return 0;
}


