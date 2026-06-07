#include<bits/stdc++.h>
using namespace std;
int main(){
string s,s1;
cin>>s>>s1;
int co=0;
int i=0,j=0;
while(j<s1.size()&&i<s.size()){
    if(s[i]==s1[j]){

        i++;
        j++;
    }
    else j++;
    co=i+1;
}
cout<<co<<endl;
return 0;
}
