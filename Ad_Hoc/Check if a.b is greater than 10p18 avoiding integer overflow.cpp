#include<bits/stdc++.h>
using namespace std;
const long long int p=1e18;
typedef unsigned long long int ll;
int main(){
ll a,b;
cin>>a>>b;
if(a==0 or b==0){
    cout<<"Not greater than 10^18"<<endl;
}
else{
    ll c=p/a;/**Attention please,condition was a*b>10^18 ,Short technic**/
if(b>c)cout<<"Greater than 10^18"<<endl;
else cout<<"Not greater than 10^18"<<endl;
}


return 0;
}
