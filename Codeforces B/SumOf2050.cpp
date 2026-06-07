#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=0;
      cin>>n;
    while(n>=2050){
        ans++;

    int x=2050;
    while(x<=n){
         x*=10;

    }
    x/=10;
    n-=x;

    }
    if(ans==0)
        cout<<"-1"<<endl;
    else
        cout<<ans<<endl;


return 0;
}
