#include<bits/stdc++.h>
using namespace std;
int main(){
     long long   x;cin>>x;

     long long a,b;
     for(long long i=1;i*i<=x;i++){
              if(x%i==0  and __gcd(i,x/i)==1){
                a=i;
                b=x/i;
              }
     }

     cout<<a<<" "<<b<<endl;


return 0;
}
