#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
              ll n;cin>>n;
              string str=to_string(n);
              if(str.size()==1){
                cout<<0<<endl;
                return;
              }

              int sum=0,ans=18;
              sum+=str[0]-'0';
               int sz=str.size();
              sort(begin(str)+1,end(str));

              int i;
              for( i=1;i<str.size();i++){
                if(sum+(str[i]-'0')<10){
                    sum+=str[i]-'0';
                }
                else break;
              }
              ans=min(ans,sz-i);




              sum=1;
             for( i=1;i<str.size();i++){
                if(sum+(str[i]-'0')<10){
                    sum+=str[i]-'0';
                }
                else break;
              }

              ans=min(ans,sz-i+1);

              cout<<ans<<endl;
}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}

