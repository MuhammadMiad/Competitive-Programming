#include<bits/stdc++.h>
using namespace std;
typedef long long  int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>arr(n);
        ll no=0,zero=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]!=0)no++;
            if(arr[i]==0)zero++;

        }
        if(no==n){
            cout<<1<<endl;
            continue;
        }
        if(zero==n){
            cout<<0<<endl;
            continue;
        }
        ll co=-1,non=0,zer=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                if(co==1)non++;
                co=0;
            }
            else{
                if(co==0)zer++;
                co=1;
            }
        }
        if(co==0)zer++;
        if(co==1)non++;
        if(non>1)cout<<2<<endl;
        else cout<<1<<endl;

    }




return 0;
}
