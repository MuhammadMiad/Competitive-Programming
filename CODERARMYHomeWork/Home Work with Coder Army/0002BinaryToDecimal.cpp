#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter Binary Number:";
cin>>n;
int rem,mul=1,ans=0;
while(n){
    rem=n%10;
    n=n/10;
    ans=rem*mul;
    mul=mul*2;

}
cout<<ans<<endl;



return 0;
}
