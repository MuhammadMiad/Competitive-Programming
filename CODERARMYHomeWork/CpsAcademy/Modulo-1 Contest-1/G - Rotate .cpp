#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int s=n;
  int c=n%10;
  n/=10;
  int b=n%10;
   n/=10;
  int a=n%10;
  int sum=s+(b*100+c*10+a)+(c*100+a*10+b);
  cout<<sum<<endl;

return 0;
}

