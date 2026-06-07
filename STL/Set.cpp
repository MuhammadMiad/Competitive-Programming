#include<bits/stdc++.h>
using namespace std;
int main(){
set<int>st;
st.insert(80);
st.insert(20);
st.insert(10);
st.insert(40);

cout<<st.max_size()<<endl;
set<int>::iterator it;
it=st.find(20);

if(it!=st.end())cout<<"Found"<<endl;
else cout<<"Not Found"<<endl;

cout<<st.count(10)<<endl;
//it=st.lower_bound(100);
it=st.upper_bound(70);
if(it==st.end())cout<<"The element is  largest to the greater element"<<endl;
else cout<<*it<<endl;
//it=st.begin();
//advance(it,2);
//st.erase(it);
//st.erase(20);
///swap same before topic
///emplace same before topic

set<int>s1;
s1=st;
for(auto it:s1)cout<<it<< " ";
cout<<endl;

return 0;
}
