#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
      int n;cin>>n;
      string str;cin>>str;
      char ch=str[0];
      int cnt=0;
      for(int i=0;i<n;i++){
        if(str[i]!=ch){
            ch=str[i];
            cnt++;
        }
      }

      if(cnt==1)cout<<2<<endl;
      else  cout<<1<<endl;

}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}

