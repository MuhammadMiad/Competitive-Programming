#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int st=n;
int ans=0;
while(n){
    int rem=n%10;
    n/=10;
    ans=ans*10+rem;
}
if(ans==st)cout<<ans<<endl<<"YES"<<endl;
else cout<<ans<<endl<<"NO"<<endl;

return 0;
}
