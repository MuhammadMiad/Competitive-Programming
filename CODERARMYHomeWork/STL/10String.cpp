#include<bits/stdc++.h>
using namespace std;
int main(){
string str;
//cin>>str;
getline(cin,str);

//transform(begin(str),end(str),begin(str),:: tolower);
//int a=stoi(str);
//cout<<a/2<<endl;
istringstream  temp(str);
string word;
while(temp>>word)cout<<word<<endl;
while(!str.empty()){
    cout<<str.back()<<endl;
    str.pop_back();
}
char a='m';
str=string (4,a);
cout<<str<<endl;


return 0;
}
