#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cin>>num;
if(num%400==0){
    cout<<"Leap Year."<<endl;
}
else if(num%4==0 && num%100!=0){
    cout<<"Leap Year."<<endl;
}
else cout<<"NOt Leap Year."<<endl;

return 0;
}
