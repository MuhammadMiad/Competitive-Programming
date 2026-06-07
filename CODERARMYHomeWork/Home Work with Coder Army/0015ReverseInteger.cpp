#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a;
    cin>>a;
    long long ans=0;
    while(a){

        int rem=a%10;
        a/=10;
        ans=ans*10+rem;
    }
    cout<<ans<<endl;

return 0;
}
