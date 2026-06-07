#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
int t;
cin>>t;
vector<string >v;
while(t--){
    ll a,b,c,x,y;
    cin>>a>>b>>c;
  if(c%2==1){
    x=c/2+1;
    y=c/2;
  }
  else{
    x=c/2;
    y=c/2;
  }
  if(a+x>y+b)v.push_back("First");
  else if(a+x==y+b)v.push_back("Second");
  else v.push_back("Second");
}
for(auto it:v){
    cout<<it<<endl;
}
return 0;
}
