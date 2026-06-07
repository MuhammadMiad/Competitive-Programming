#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,x;
        cin>>n>>k>>x;
       ll mn=(k*(k+1))/2;
       ll total_sum=(n*(n+1))/2;
       ll diff=n-k;
       ll differ=(diff*(diff+1))/2;
       ll mx=total_sum-differ;
       if(x>=mn and x<=mx)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }


return 0;
}
