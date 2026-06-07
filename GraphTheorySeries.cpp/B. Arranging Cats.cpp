#include<bits/stdc++.h>
using  namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int n;
    cin>>n;
    string s,s1;
    cin>>s>>s1;
    int co=0,c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'&&s1[i]=='1'){
            co++;
        }
        else if(s[i]=='1'&&s1[i]=='0'){
            c++;
        }
    }

    if(co==0&&c==0){
        v.push_back(0);
    }
    else if(co>c){
        v.push_back(co);
    }
    else if(co==c){
        v.push_back(co);
    }
    else if(c>co){
        v.push_back(c);
    }
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
