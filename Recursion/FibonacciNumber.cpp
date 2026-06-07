#include<bits/stdc++.h>
using namespace std;
int  Fibo(int n){
if(n<=1) return n;
int first=Fibo(n-1);
int second=Fibo(n-2);
return first+second;
}
int main(){
int n;
cin>>n;
cout<<Fibo(n)<<endl;

return 0;
}
