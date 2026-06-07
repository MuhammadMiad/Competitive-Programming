#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    string s,s1="314159265358979323846264338327";
    cin>>s;
    int co=0;
    for(int i=0;i<s.size();i++){
            if(s[i]!=s1[i])break;
            if(s[i]==s1[i]) co++;
    }
 v.push_back(co);
}
for(auto it:v){
    cout<<it<<endl;
}
return 0;
}
