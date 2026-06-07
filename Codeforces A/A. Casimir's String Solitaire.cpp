#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<string >v;
 while(t--){
    string s;
    cin>>s;
    int a,b,c;
    a=b=c=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='A')a++;
    else if(s[i]=='B')b++;
    else c++;
  }
  if(a+c==b)v.push_back("YES");
  else v.push_back("NO");
 }
for(string  it:v){
    cout<<it<<endl;
}
return 0;
}
