#include<bits/stdc++.h>
using namespace std;
bool cheakpal(string str,int start,int End){
   if(start>=End)return 1;

   if(str[start]!=str[End])return 0;
   return cheakpal(str,start+1,End-1);
 }
int main(){
string str="madami";
if(cheakpal(str,0,str.size()-1))cout<<"Palindrome"<<endl;
else cout<<"Not palindrome"<<endl;

return 0;
}
