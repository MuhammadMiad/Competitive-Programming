#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    map<string ,int>mp;
    vector<int>v;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        string m="";
        for(int i=0;i<s.size()-1;i++){
               m+=s[i];
               m+=s[i+1];
            mp[m]++;
            m="";
        }
        v.push_back(mp.size());
        mp.clear();
    }
    for(auto it:v){
        cout<<it<<endl;
    }

return 0;
}
