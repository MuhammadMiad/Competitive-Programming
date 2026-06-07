#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    string  s;
    cin>>s;
    int ans=0;
    for(int i=0;i<s.size();i++){
         ans=ans*10+s[i]-'0';
         ans%=2;

    }
    if(ans%2==0){
        v.push_back(1);
    }
    else
        v.push_back(0);
}
for(int i=0;i<v.size();i++){
    if(v[i]==1)
    cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
return 0;
}
