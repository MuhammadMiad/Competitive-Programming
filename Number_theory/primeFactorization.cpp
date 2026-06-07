#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;

for(int i=2;i*i<=n;i++){
    if(n%i==0){
            int p=0;
        while(n%i==0){
            p++;
            n/=i;
        }
    cout<<i<<"^"<<p<<"*";
    }
}
if(n>1)
cout<<n<<"^"<<"1";
return 0;
}
