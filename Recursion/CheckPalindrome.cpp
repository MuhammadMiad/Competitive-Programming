#include<bits/stdc++.h>
using namespace std;
bool CheckPal(string str,int start,int End){
 if(start>=End)return 1;
 if(str[start]!=str[End])return 0;
 return CheckPal(str,start+1,End-1);

}
int main(){
string str;
cin>>str;
bool ans=CheckPal(str,0,str.size()-1);
if(ans)cout<<"Palindrome"<<endl;
else cout<<"Not Palindrome"<<endl;


return 0;
}
