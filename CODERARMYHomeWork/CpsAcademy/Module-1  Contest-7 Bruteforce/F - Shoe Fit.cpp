#include<bits/stdc++.h>
using namespace std;
void solve(){
   int a,b,c;
   cin>>a>>b>>c;
   int zero=0,one=0;
   if(a==0)zero++;
   if(b==0)zero++;
   if(c==0)zero++;
   if(a==1)one++;
   if(b==1)one++;
   if(c==1)one++;

   if(zero and one)cout<<1<<endl;
   else cout<<0<<endl;

}
int main(){
int t;cin>>t;
while(t--){
    solve();
}

return 0;
}
