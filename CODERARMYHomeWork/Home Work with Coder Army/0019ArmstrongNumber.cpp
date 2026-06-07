#include<bits/stdc++.h>
using namespace std;
int digit(int n){
if(n==0)return 1;
int co=0;
while(n){
    co++;
    n/=10;
}
return co;
}
bool arms(int n,int cnt){
  int m=n,ans=0;
  while(m){
    int rem=m%10;
    ans+=pow(rem,cnt);
    m/=10;
  }
  if(ans==n)return 1;
  else return 0;
}
int main(){
int n;
cin>>n;
int cnt=digit(n);
bool ans=arms(n,cnt);
if(ans==1)cout<<"This number is Armstrong "<<endl;
else cout<<"This number is not Armstrong"<<endl;
}
