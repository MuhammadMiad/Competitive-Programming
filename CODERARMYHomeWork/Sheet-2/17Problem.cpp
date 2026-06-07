#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n==0)cout<<0<<endl;
        else{
             while(n){
            long long  rem=n%10;
            n/=10;
            cout<<rem<<" ";
        }
        cout<<endl;
    }
        }


return 0;
}
