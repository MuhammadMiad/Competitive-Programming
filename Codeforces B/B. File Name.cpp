#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
string s;
cin>>s;
int co=0,c=1;
for(int i=0;i<s.size()-1;i++){

    if(s[i]==s[i+1]&&s[i]=='x'){
            c++;
        if(s[i+1]!=s[i+2]){
             if(c>2)co+=c-2;

             c=1;
        }
    }



}
cout<<co<<endl;

return 0;
}
