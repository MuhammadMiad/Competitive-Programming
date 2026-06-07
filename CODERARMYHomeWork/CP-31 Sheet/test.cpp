#include<bits/stdc++.h>
using namespace std;
int main(){
//  char a,b,c,d;
//  cin>>a>>b>>c>>d;
//  int ff=abs(a-b);
//  int ss=abs(c-d);
//
//  if(ff>2)ff=5-ff;
//  if(ss>2)ss=5-ss;
//
//  if(ff==ss)cout<<"Yes\n";
//  else cout<<"No\n";
long long n;
cin>>n;
if(n<=999)cout<<n<<endl;
else if(n<=9999)cout<<n-(n%10)<<endl;
else if(n<=99999)cout<<n-(n%100)<<endl;
else if(n<=999999)cout<<n-(n%1000)<<endl;
else if(n<=9999999)cout<<n-(n%10000)<<endl;
else if(n<=99999999)cout<<n-(n%100000)<<endl;
else if(n<=999999999)cout<<n-(n%1000000)<<endl;


  return 0;
}
