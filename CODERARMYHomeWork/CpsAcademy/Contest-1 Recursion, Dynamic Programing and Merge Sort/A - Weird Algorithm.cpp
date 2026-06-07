#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(ll n){
     cout<<n<<" ";
    if(n==1)return;



    if(n%2==0){
        n/=2;
        solve(n);
    }
    else{
        n*=3;
        n++;
        solve(n);
    }

}
int main(){
 ll n;cin>>n;
 solve(n);

return 0;
}
