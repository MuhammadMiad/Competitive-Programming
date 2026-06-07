#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
map<string ,string >mp;

while(t--){
    string s,s1;
    cin>>s>>s1;
    swap(s[0],s1[0]);
    mp.insert({s,s1});

}
for(auto it: mp){
    cout<<it.first<<" "<<it.second<<endl;
}

return 0;
}
