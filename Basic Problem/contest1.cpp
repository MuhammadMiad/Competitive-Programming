#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
 if(b==0)return a;
 return GCD(b,a%b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int gcd=GCD(a,b);

        int lcd=(a*b)/gcd;
        cout<<lcd<<endl;
    }

return 0;
}
