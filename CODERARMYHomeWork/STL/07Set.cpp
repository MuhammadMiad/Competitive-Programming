#include<bits/stdc++.h>
using namespace std;
main(){
set<int,greater<int>>s;
s.insert(44);
s.insert(44);
s.insert(23);
s.insert(30);
s.insert(20);
for(auto it:s)cout<<it<<" ";
cout<<endl;

return 0;
}
