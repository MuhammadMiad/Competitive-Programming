#include<bits/stdc++.h>
using namespace std;
int square(int n){
  if(n==1||n==0)return n;
  return n*n+square(n-1);
}
int main(){
int n;
cin>>n;
cout<<square(n)<<endl;
return 0;
}
