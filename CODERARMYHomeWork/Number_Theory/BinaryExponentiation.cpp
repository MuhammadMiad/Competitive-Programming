#include<bits/stdc++.h>
using namespace std;
#define mod 100000007
typedef long long int ll;
ll solve(ll base,ll power){
    ll result=1;
    while(power){
        if(power%2){
            result=(result*base)%mod;
            power--;
        }
        else{
            base=(base*base)%mod;
            power/=2;
        }
    }
    return result;

}
int main(){
 ll base,power;
 cin>>base>>power;
 ll result=solve(base,power);
 cout<<result<<endl;

return 0;
}
