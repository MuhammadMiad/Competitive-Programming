#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
        int n;
cin>>n;
string s;
cin>>s;
int co;
for(int i=0;i<s.size();i++){
    if(s[i]=='B'){
        co=i;
        break;
    }
}
int p;
for(int i=0;i<s.size();i++){
    if(s[i]=='B'){
        p=i;
    }
}

v.push_back((p-co)+1);

}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
