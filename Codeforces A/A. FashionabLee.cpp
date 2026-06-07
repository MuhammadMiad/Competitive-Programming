#include<bits/stdc++.h>
using  namespace std;
int main(){
int t;
cin>>t;
vector<string>v;
while(t--){
    int n;
    cin>>n;
    if(n%4==0)v.push_back("YES");
    else v.push_back("NO");
}
for(auto it:v){
    cout<<it<<endl;
}
return 0;
}
