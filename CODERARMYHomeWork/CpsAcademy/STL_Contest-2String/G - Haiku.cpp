#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=3;
    vector<int>v;
    while(x--){
     string str;
     getline(cin,str);
     int cnt=0;
     for(int i=0;i<str.size();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')cnt++;
     }
     v.push_back(cnt);
    }
    if(v[0]==5 and v[1]==7 and v[2]==5)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


return 0;
}
