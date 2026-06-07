#include<bits/stdc++.h>
using namespace std;
int main(){
map<int , int >mp;
mp.insert({1,10});
mp.insert({2,20});
mp.insert({3,30});
mp.insert({4,40});
mp.insert({5,50});

mp.erase(2);
for(auto it:mp){
    cout<<it.first<< " "<<it.second<<endl;
}
cout<<endl;

return 0;
}
