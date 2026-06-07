#include<bits/stdc++.h>
using namespace std;
int CountVowel(string str,int index){
if(index<0)return 0;

if(str[index]=='a'||str[index]=='e'||str[index]=='i'||str[index]=='o'||str[index]=='u')
    return 1+CountVowel(str,index-1);
else return CountVowel(str,index-1);
}
int main(){
string str;
getline(cin,str);

cout<<"Count of Vowel in String:"<<CountVowel(str,str.size()-1)<<endl;

return 0;
}
