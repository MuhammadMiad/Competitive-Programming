#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;

vector<int>v,v1;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
         v1.push_back(s[i]);
    }
    sort(v1.begin(),v1.end());
    v.push_back((int )v1[s.size()-1]-96);
   v1.clear();
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
