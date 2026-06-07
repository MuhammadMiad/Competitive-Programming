#include<bits/stdc++.h>
using namespace std;
int  main(){
int n;
cin>>n;
vector<string >v;
while(n--){
    string s,s1="";
    cin>>s;
     s1+=s[0];
    for(int i=1;i<s.size()-1;i+=2){
      s1+=s[i];
    }
    s1+=s[s.size()-1];

    v.push_back(s1);


}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}


return 0;
}
