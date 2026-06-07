#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    double x=abs(a-b);
    double  y=ceil(x/2);
    float z=ceil(y/c);
    v.push_back(z);
}
for(auto it:v){
    cout<<it<<endl;
}
return 0;
}
