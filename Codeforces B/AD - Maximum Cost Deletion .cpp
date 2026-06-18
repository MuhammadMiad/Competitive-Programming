#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
       int n,a,b;
       cin>>n>>a>>b;
       string str;cin>>str;
       int ans=0;
       ans=a*n;

       if(b<0){
              int cnt1=0,z=0;
              for(int i=0;i<n;i++){
                 if(str[i]=='0'){
                     while(str[i]=='0' and i<n){
                        i++;
                        z++;
                     }
                     cnt1++;
                 }
              }
              if(z!=n)cnt1++;

              int cnt2=0;
              z=0;
              for(int i=0;i<n;i++){
                if(str[i]=='1'){
                    while(str[i]=='1' and i<n){
                        i++;z++;
                    }
                    cnt2++;

                }
              }

              if(z!=n)cnt2++;

              int cnt=min(cnt1,cnt2);
              ans+=cnt*b;
       }
       else{
          ans+=n*b;
       }

       cout<<ans<<endl;


}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}
