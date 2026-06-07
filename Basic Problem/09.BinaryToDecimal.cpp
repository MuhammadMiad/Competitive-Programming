#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cout<<"Enter  Binary Number to convert Decimal Number:"<<endl;
cin>>num;
int ans=0,mul=1;
while(num>0){
    int rem=num%10;
    ans=ans+rem*mul;
    mul*=2;
    num/=10;
}
cout<<ans<<endl;
return 0;
}
