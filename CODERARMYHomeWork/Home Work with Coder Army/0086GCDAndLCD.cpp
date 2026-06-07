#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
   if(a==0)return b ;
   return GCD(b%a,a);

}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=GCD(a,b);

    cout<<"GCD  of "<<a<<" & "<<b<<":"<<ans<<endl;
    int ans2=(a*b)/ans;
    cout<<"LCD  of "<<a<<" & "<<b<<":"<<ans2<<endl;


return 0;
}
