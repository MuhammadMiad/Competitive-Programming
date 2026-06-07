#include<bits/stdc++.h>
using namespace std;
int main(){
double a,b,c,d,s1,s2;
cin>>a>>b>>c>>d;
s1=b*log(a);
s2=d*log(c);
if(s1>s2)cout<<"YES"<<endl;
else cout<<"NO"<<endl;

return 0;
}
