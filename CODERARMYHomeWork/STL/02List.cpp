#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>lt;
    lt.push_front(30);
    lt.push_back(30);
    lt.push_back(45);
    lt.push_back(20);


map<int,list<int>::iterator>mp;
mp[30]=mp.begin();
if(mp.find(30)!=mp.end())cout<<"YES"<<endl;
else cout<<"NO"<<endl;

    //for(auto it:lt)cout<<it<<" ";
   // cout<<endl;
    //lt.remove(30);
    //lt.unique();
   //lt.reverse();
    //lt.sort();
//    while(!lt.empty()){
//        cout<<lt.front()<<" ";
//        lt.pop_front();
//
//    }
list<int>::iterator it;
for(it=lt.begin();it!=lt.end();it++){
    cout<<*it<<" ";
}

cout<<endl;
cout<<lt.size()<<endl;





return 0;
}
