#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
ll DigitSum(ll n){
 if(n==0)return 0;
 return DigitSum(n/10)+(n%10);
}

int main(){
ll n;
cin>>n;
cout<<DigitSum(n)<<endl;

return 0;
}
