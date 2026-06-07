#include<bits/stdc++.h>
using namespace std;
int main(){
map<int,int>mp;
mp.insert({1,20});
mp[0]=40;
for(int i=2;i<5;i++){
    cin>>mp[i];
}
mp.erase(0);
for(auto it=mp.begin();it!=mp.end();it++){
    cout<<it->first<<"   "<<it->second<<endl;
}

return 0;
}
