#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
ll  Fact(ll n){
    if(n==1||n==0){
        return 1;
    }
return n*Fact(n-1);
}
int main(){
int n;
cin>>n;
cout<<"Factorial of  "<<n<<" : "<<Fact(n)<<endl;


return 0;
}
