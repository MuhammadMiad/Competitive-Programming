#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll l,r,a;
        cin>>l>>r>>a;
        if(a==1){
            cout<<r<<endl;
            continue;
        }
        ll ans1,ans2,x;
        if((r-(r%a)-1>=l))x=(r-(r%a)-1);
        else x=r;
        ans1=x/a+x%a;

        ans2=r/a+r%a;
        cout<<max(ans1,ans2)<<endl;
    }


return 0;
}
