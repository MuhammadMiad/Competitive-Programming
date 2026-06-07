#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int year,month,day;
year=n/365;
int rem=n%365;
month=rem/30;
int r=rem%30;
cout<<year<<" years"<<endl<<month<<" months"<<endl<<r<<" days"<<endl;



return 0;
}
