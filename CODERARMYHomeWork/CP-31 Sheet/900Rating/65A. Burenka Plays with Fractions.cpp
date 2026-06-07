#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll first=a*d;
        ll second=b*c;
        if(first==second)cout<<0<<endl;
        else if(first==0||second==0||first%second==0||second%first==0)cout<<1<<endl;
        else cout<<2<<endl;

    }

return 0;
}
