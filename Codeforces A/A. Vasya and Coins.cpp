#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
vector<int>v;
while(t--){
    int a,b;
    cin>>a>>b;
    if(a==0)v.push_back(1);
    else if(b==0)v.push_back(a+1);
    else v.push_back(a+b*2+1);
}
for(int i:v){
    cout<<i<<endl;
}
return 0;
}
