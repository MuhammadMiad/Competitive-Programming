#include<bits/stdc++.h>
using namespace std;
int main(){
double n,k,a;
cin>>n>>k>>a;
int p=2147483647;

double x=(n*k)/a;
long long y=(n*k)/a;
cout<<y<<endl;
if((x-y)>0)cout<<"double"<<endl;
else if(y>p)cout<<"long long"<<endl;
else cout<<"int"<<endl;

return 0;
}
