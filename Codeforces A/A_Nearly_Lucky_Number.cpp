#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m,co=0,t=0;
cin>>n;
while(n>0){
    m=n%10;
    n/=10;

  if(m==7||m==4){
        t+=m*10;
    co++;
  }

}
cout<<co<<endl;
if(co==7 || co==4)
    cout<< "YES"<<endl;
else
    cout<<"NO"<<endl;


return 0;
}
