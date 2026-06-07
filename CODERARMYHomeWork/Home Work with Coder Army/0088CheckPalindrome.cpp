#include<bits/stdc++.h>
using namespace std;
bool Palindrome(string &str,int start, int End){

 if(start>=End)return 1;
 if(str[start]!=str[End])return 0;
 return Palindrome(str,start+1,End-1);
}
int main(){
    string str;
    cin>>str;
    bool ans=Palindrome(str,0,str.size()-1);
    if(ans)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
return 0;
}
