#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cout<<"Enter Decimal Number to convert Octal Number:"<<endl;
cin>>num;
int ans=0,mul=1;
while(num>0){
    int rem=num%10;
    ans=ans+rem*mul;
    mul*=8;
    num/=10;
}
cout<<ans<<endl;
return 0;
}
