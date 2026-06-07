#include<bits/stdc++.h>
using namespace std;
string ss;
void num_to_string(int n){
    if(n){
       num_to_string((n-1)/26);
       ss+=('A'+(n-1)%26);
    }
}
int num=0;
void string_to_num(string s){

for(int i=0;i<s.size();i++){
        num=num*26+s[i]-'A'+1;

}

}
int main(){
int t;
cin>>t;
vector<string>v;
while(t--){
ss="";
num=0;
        vector<string >v1,v2;

    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z'){
            string s1;
            while(s[i]>='A'&&s[i]<='Z'){
                    s1+=s[i];

            i++;
            } v1.push_back(s1);

        }
        else{
            string s1;
            while(s[i]>='0'&&s[i]<='9'){
                    s1+=s[i];
                 i++;
            } v2.push_back(s1);
        }
        i--;
    }
    if(v1.size()>1&&v2.size()>1){
     string  ans1,ans2;
     ans1=v2[0];
     ans2=v2[1];
     int x=stoi(ans2);
     num_to_string(x);
     //cout<<ss<<ans1<<endl;
     v.push_back(ss+ans1);
    }
    else{

        string ans1,ans2;
        ans1=v2[0];
        ans2=v1[0];
        string_to_num(ans2);
       // cout<<'R'<<ans1<<'C'<<num<<endl;
       v.push_back("R"+ans1+"C"+to_string(num));
    }

}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
