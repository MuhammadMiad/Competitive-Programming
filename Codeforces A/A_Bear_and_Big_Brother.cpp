#include<bits/stdc++.h>
using namespace std;
int main(){
int l,b,coun=1;
cin>>l>>b;
int w1=l*3;
int w2=b*2;
while(w1<=w2){
    w1*=3;
    w2*=2;
    coun++;
}
cout<<coun<<endl;
return 0;
}
