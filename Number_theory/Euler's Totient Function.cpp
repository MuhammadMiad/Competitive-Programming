#include<bits/stdc++.h>
using namespace std;
void Phi(int n){
    int ans=n;
for(int i=2;i*i<=n;i++){
    if(n%i==0){
       int   co=0;
        while(n%i==0){
            co++;
            n/=i;
        }
        ans=ans*(i-1);
        ans/=i;
    }

}
if(n>1){
     ans*=(n-1);
    ans/=n;
}
cout<<ans<<endl;
}
int main(){
int n;
cin>>n;
Phi(n);

return 0;
}
