#include<bits/stdc++.h>
using  namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int x,y,z;
    cin>>x>>y>>z;
    int m=abs(x-x)+abs(y-x)+abs(z-x);
    int n=abs(x-y)+abs(y-y)+abs(z-y);
    int o=abs(x-z)+abs(y-z)+abs(z-z);
    int mn=min(m,min(n,o));
    v.push_back(mn);
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}

}
