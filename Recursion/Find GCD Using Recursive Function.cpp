#include<bits/stdc++.h>
using namespace std;
int GCD(int x, int y){

 if(y==0) return x; //if(x%y==0) return y;
 return  GCD(y, x%y);

}
int main(){
int n,m;
cin>>n>>m;

int a= GCD(n,m);
cout<<"GCD of  "<<n<<" and "<<m<<" : "<<a <<endl;
cout<<"LCD of  "<<n<<" and "<<m<<" : "<<(n*m)/a<<endl;

return 0;
}
