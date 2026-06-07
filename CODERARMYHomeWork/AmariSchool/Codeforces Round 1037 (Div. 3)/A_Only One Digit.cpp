#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int x=n;
       int mn=10000;
       while(x){
        int rem=x%10;
        x/=10;
        mn=min(rem,mn);
       }
       cout<<mn<<endl;

    }


return 0;
}
