#include<bits/stdc++.h>
using namespace std;
void digit(int n){
    int ans=0;
   while(n){
    int rem=n%10;
    n/=10;
    ans+=rem;
   }
   if(ans>9)
    digit(ans);
   else
    cout<<ans<<endl;
}
int main(){
int n;
cin>>n;
digit(n);
return 0;
}
