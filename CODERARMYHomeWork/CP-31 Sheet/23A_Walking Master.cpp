#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==c and b==d)cout<<0<<endl;
        else if(b>d)cout<<-1<<endl;
        else{
            ll x=d-b;
            ll y=a+x;
            if(y<c)cout<<-1<<endl;
            else{
               ll ans=y-c;
               ans+=x;
               cout<<ans<<endl;
            }
        }

    }


return 0;
}
