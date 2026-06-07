#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
typedef long double ld;
int main(){
    int  t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ld x,y=0,flag=0;
       if(n==k)cout<<"YES"<<endl;
       else if(n%2==0)cout<<"YES"<<endl;
       else if(n%2==1 and k%2==0)cout<<"NO"<<endl;
       else if(n%(2+k)==0)cout<<"YES"<<endl;
       else cout<<"YES"<<endl;

    }


return 0;
}
