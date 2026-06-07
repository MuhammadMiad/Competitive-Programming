#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>v;
v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
v.push_back(50);

for(int i=0;i<v.size();i++)cout<<v[i]<< " ";
cout<<endl;
for(int it:v)cout<<it<< " ";
cout<<endl;
cout<<v.front()<<endl;
cout<<v.back()<<endl;
///v.pop_back();
///v.erase(v.begin()+2);
///v.erase(v.begin()+1,v.end()-1);
v.insert(v.begin()+4,33);
///v.insert(v.begin()+1,3,100);
for(auto print:v)cout<<print<< " ";
cout<<endl;
vector<int>::iterator it;
it=v.begin()+1;
cout<<*it<<endl;
for(it=v.begin();it!=v.end();it++)cout<<*it<<"  ";
cout<<endl;
return 0;
}
