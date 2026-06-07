#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
 if(b==0) return a;
  return gcd(b,a%b);

}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int x=gcd(1,n-1);
    int y=(1*(n-1))/x;
    if(x+y==n)cout<<"1"<< " "<<n-1<<endl;
}



return 0;
}
