#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
ll n,m,a,x,y;
cin>>n>>m>>a;
if(n%a==0)x=n/a;
else x=(n/a)+1;
if(m%a==0) y=m/a;
else y=(m/a)+1;

cout<<x*y<<endl;


return 0;
}
