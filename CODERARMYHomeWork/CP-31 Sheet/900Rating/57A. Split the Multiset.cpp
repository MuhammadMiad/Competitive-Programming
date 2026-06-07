#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;

        if(n<=k||n==1){
            if(n==1)cout<<0<<endl;
            else cout<<1<<endl;

            continue;
        }
        int cnt=0;
        k--;
        while(n>=2){
            n=n-k;
            cnt++;
        }
        cout<<cnt<<endl;

    }

return 0;
}
