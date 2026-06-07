#include<bits/stdc++.h>
using namespace std;
int alternate(string str){
int n=str.size();
vector<int>dis(26,0);
vector<char>ch;
///find distinct character.
for(int i=0;i<n;i++){
    if(dis[str[i]-'a']==0)ch.push_back(str[i]);

    dis[str[i]-'a']++;
}
///making possible pair.
vector<string>Pair;
string c;
for(int i=0;i<ch.size();i++)
   for(int j=i+1;j<ch.size();j++){
      c+=ch[i];
      c+=ch[j];
    Pair.push_back(c);
    c.clear();
}
///all combinations
vector<string>ans;
for(int i=0;i<Pair.size();i++){
        string temp;
        string s=Pair[i];
   for(int j=0;j<n;j++){
      if(s[0]==str[j])temp+=s[0];
      else if(s[1]==str[j])temp+=s[1];
  }
  ans.push_back(temp);
}
///check maximum length only distinct characters ,where none of them repeat simultaneously
 int mx=0;
for(int i=0;i<ans.size();i++){
        int co=1;
        string s=ans[i];
    for(int j=0;j<ans[i].size()-1;j++){
        if(s[j]!=s[j+1]){
            co++;

        }
    }
    if(co==s.size()){
        mx=max(mx,co);
    }
}
return mx;

}
int main(){
string str;
cin>>str;

cout<<alternate(str)<<endl;


return 0;
}
