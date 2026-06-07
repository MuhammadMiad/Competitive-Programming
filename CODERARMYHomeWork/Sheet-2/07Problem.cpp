#include<bits/stdc++.h>
using namespace std;
long long  fac(long long n){
 if(n==0)return 1;
 return n*fac(n-1);
}
int main(){
int t;
cin>>t;
while(t--){
    long long  n;
    cin>>n;
    cout<<fac(n)<<endl;
}

return 0;
}
