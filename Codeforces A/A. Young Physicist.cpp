#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int sum=0;
int x,y,z;
while(n--){
    cin>>x>>y>>z;
    sum+=(x+y+z);
}
if(sum==0)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
return 0;
}
