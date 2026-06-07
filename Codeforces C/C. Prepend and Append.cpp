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
    int  co=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=s[(s.size()-1)-i] && i<s.size()/2){
            co+=2;
        }
        else if(s[i]==s[(s.size()-1)-i]){
            break;
        }
    }
    int ans=s.size()-co;
    v.push_back(ans);

}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

return 0;
}
