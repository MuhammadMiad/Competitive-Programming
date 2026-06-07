#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll power(ll base, ll n , ll mod){
ll result=1;
while(n){
    if(n%2==1){
        result=(result*base)%mod;
        n--;
    }
    else{
        base=(base*base)%mod;
        n/=2;
    }
}
return result;

}
int main(){
int n;
cin>>n;
cout<<power(8,n,10)<<endl;
//cout<<power(1378,n,10)<<endl; //same

return 0;
}
