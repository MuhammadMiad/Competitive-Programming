#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    vector<string>st(n);
    for(int i=0;i<n;i++){
       cin>>st[i];
    }
    map<string,bool>mp;
    string str;
    for(int i=0;i<m;i++){
        cin>>str;
        mp[str]=1;
    }

    for(string s:st){
        if(mp[s])cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }


return 0;
}
