#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    map<string,int>mp;
    vector<string>st(n);

        for(int i=0;i<n;i++){
            cin>>st[i];
        }

        string str;
       for(int i=0;i<k;i++){
            cin>>str;
            mp[str]++;
       }
       int cnt=0;
       for(auto s:st){
        if(mp[s.substr(3,3)])cnt++;
       }

     cout<<cnt<<endl;
   return 0;
}
