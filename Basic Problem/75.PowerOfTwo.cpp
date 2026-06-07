#include<bits/stdc++.h>
using namespace std;
int pow(int num,int n){
  ///base case
  if(n==1)return num;

  return num*pow(num,n-1);
}
int main(){
int n;
cin>>n;
cout<<pow(2,n)<<endl;


return 0;
}
