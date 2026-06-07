#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cin>>num;
while(num!=1){
    if(num%2==1){
    cout<<"Not power of two."<<endl;
    return 0;
    }
    num/=2;
}
cout<<"Power Of two."<<endl;

return 0;
}
