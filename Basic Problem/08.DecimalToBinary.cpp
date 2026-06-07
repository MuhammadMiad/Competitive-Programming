#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter  the number Convert Decimal To binary:"<<endl;
    int num;
    cin>>num;
    long long  ans=0,mul=1;
    while(num>0){

       int rem=num%2;
      //int rem=num&1;
      ans=rem*mul+ans;
      mul*=10;
      num/=2;

    }
  cout<<ans<<endl;
return 0;
}
