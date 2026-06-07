#include<bits/stdc++.h>
using namespace std;
bool Palindrom(int i,string &s,int n){
if(i>=n/2)return true;
if(s[i]!=s[n-i-1])return false;
return Palindrom(i+1,s,n);
}
int main(){
    string s="madam";
bool ans=Palindrom(0,s,s.size());
if(ans==true)cout<<"Palindrom"<<endl;
else cout<<"Not Palindrom"<<endl;
return 0;
}
