#include<bits/stdc++.h>
using namespace std;
int main(){
list<int>lst;

lst.push_front(20);
lst.push_front(50);
lst.push_back(50);
lst.push_back(40);

for(auto it:lst)cout<<it<<" ";
cout<<endl;

cout<<lst.front()<<endl;
cout<<lst.back()<<endl;
///lst.pop_front();
///lst.pop_back();
list<int>::iterator it;
it=lst.begin();
advance(it,1);
//lst.insert(it,100);
//lst.insert(it,3,100);
//lst.erase(it);
//lst.remove(50);
///lst.reverse();
lst.sort();
//lst.unique();
list<int>lst1={1,2,3,6};
//lst.swap(lst1);
lst.merge(lst1);
for(auto it:lst)cout<<it<<" ";
cout<<endl;
for(auto it:lst1)cout<<it<<" ";
cout<<endl;


return 0;
}
