#include<bits/stdc++.h>
using namespace std;
int main(){
    long long  n;
    cin>>n;
    long long x=n;
    long long  i=x/4;
    long long  m=n-i*4;
    if(i%2==0)cout<<i<<" "<<m<<endl;
    else cout<<i<<" "<<abs(3-m)<<endl;

return 0;
}
