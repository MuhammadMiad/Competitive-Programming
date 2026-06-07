#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,int>mp;
    mp.insert(make_pair(20,30));
    mp.insert(make_pair(30,100));
    mp.insert(make_pair(40,230));
    mp.insert({100,20});
    mp[20]=40;
//
//    for(auto it=mp.begin();it!=mp.end();it++){
//        cout<<it->first<<" "<<it->second<<endl;
//    }
//    mp.erase(40);
//
//    if(mp.count(20))
//    cout<<"YES"<<endl;
cout<<mp.count(55)<<endl;

return 0;
}
