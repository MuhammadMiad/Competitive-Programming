#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c;
cin>>a>>b>>c;
int low,mid,hig;
if(a<=b&a<=c){
    low=a;
    if(b<=c){
        mid=b;
        hig=c;
    }
    else{
        mid=c;
        hig=b;
    }
}
else if(b<=a&b<=c){
    low=b;
    if(a<=c){
        mid=a;
        hig=c;
    }
    else{
        mid=c;
        hig=a;
    }
}
else{
    low=c;
    if(b<=a){
        mid=b;
        hig=a;
    }
    else{
        mid=a;
        hig=b;
    }
}
cout<<low<<endl<<mid<<endl<<hig<<endl;
cout<<endl;
cout<<a<<endl<<b<<endl<<c<<endl;

return 0;
}
