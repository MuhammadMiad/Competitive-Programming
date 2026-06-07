#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cout<<"Enter  Binary Number to convert Octal Number:"<<endl;
cin>>num;
int num2=0,mul=1,FinalAns=0;
while(num>0){
    int rem=num%10;
    num2=num2+rem*mul;
    mul*=2;
    num/=10;
}
  mul=1;
while(num2){
    int rem=num2%8;
     FinalAns=rem*mul+FinalAns;
     mul*=10;
     num2/=8;
}
cout<<FinalAns<<endl;
return 0;
}

