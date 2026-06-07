#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    map<char,int>mp;
    vector<int>v;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s,s1={'A' ,'B','C','D','E','F','G'};

        cin>>s;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int co=0;
        for(auto it:mp){

       if(it.second<m) co+=m-it.second;
        }
        v.push_back(m*(s1.size()-mp.size())+co);

        mp.clear();

        }
 for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
 }

return 0;
}
