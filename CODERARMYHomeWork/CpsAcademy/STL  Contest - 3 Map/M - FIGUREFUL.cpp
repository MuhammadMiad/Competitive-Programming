#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    map<pair<int,int>,string>mp;
    while(n--){
        int x,y; string str;
        cin>>x>>y>>str;
        mp[{x,y}]=str;
    }
    int k;
    cin>>k;
    while(k--){
        int x,y;
        cin>>x>>y;
        cout<<mp[{x,y}]<<endl;
    }



return 0;
}
