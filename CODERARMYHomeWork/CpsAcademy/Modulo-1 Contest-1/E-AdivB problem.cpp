#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  int x=a/b;
  int y=a%b;
  double d=(double)a/(double)b;
  cout<<x<<" "<<y<<" "<<fixed<<setprecision(5)<<d<<endl;

return 0;
}

