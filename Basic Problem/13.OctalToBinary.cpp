#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cout<<"Enter  Octal Number to convert Binary Number:"<<endl;
cin>>num;
int ans=0,mul=1;
while(num>0){
    int rem=num%10;
    ans=ans+rem*mul;
    mul*=8;
    num/=10;
}
int FinalAns=0;
mul=1;
while(ans>0){
    int rem=ans%2;
    FinalAns=FinalAns+rem*mul;
    mul*=10;
    ans/=2;
}
cout<<FinalAns<<endl;
return 0;
}

