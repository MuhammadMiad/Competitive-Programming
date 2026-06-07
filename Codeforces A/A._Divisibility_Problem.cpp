#include<bits/stdc++.h>
using namespace std;
int  main(){
int n,k,m,p;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    cin>>k>>m;
    p=k%m;
    if(p>0)
   v.push_back(m-p);
   else
    v.push_back(p);
}

for(auto it:v)
    cout<<it<<endl;

return 0;
}
