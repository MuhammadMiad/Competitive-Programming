#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        set<ll>st;
        int cnt=0;
        for(ll k=l;k<=r;k++ ){
                ll n=k;
            int flag=0;
            for(int i=2;i*i<=n;i++){
            if(n%i==0){
                while(n%i==0){
                    n/=i;
                }
                if(i<9)flag=1;
            }
        }
        if(!flag)cnt++;
        else if(n>1 and n<9)cnt++;

        }
        cout<<cnt<<endl;

    }


return 0;
}

