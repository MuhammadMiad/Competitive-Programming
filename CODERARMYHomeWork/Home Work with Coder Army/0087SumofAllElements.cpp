#include<bits/stdc++.h>
int Sum(int n){
   if(n==0)return 0;
   return n+Sum(n-1);
}
using namespace std;
int main(){
   int n;
   cin>>n;
   cout<<Sum(n)<<endl;
return 0;
}
