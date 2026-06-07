#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
 cin>>t;
 vector<int>v,v1,v2;
 while(t--){
int a,b;
for(int i=0;i<4;i++){
    cin>>a>>b;
    v.push_back(a);
    v1.push_back(b);
}
int ans=0;
for(int i=1;i<v.size();i++){
    if(v[0]==v[i]){
        ans=abs(v1[0]-v1[i]);
        break;
    }
}
v2.push_back(ans*ans);
v.clear();
v1.clear();

 }
for(int i=0;i<v2.size();i++){
    cout<<v2[i]<<endl;
}

return 0;
}
