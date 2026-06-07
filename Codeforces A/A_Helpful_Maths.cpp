#include<bits/stdc++.h>
using namespace std;
int main(){
string n,s="";
cin>>n;
for(int i=0;i<n.size();i++){
    if(n[i]!='+'){
        s+=n[i];
    }
}
sort(s.begin(),s.end());
cout<<s[0];

for(int i=1;i<s.size();i++){
    cout<<'+'<<s[i];
}

cout<<endl;
return 0;
}
