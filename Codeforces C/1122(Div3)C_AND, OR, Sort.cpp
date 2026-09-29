#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
            int n;cin>>n;
            string str;
            cin>>str;

            if(count(begin(str),end(str),'0')==n || count(begin(str),end(str),'1')==n){
                cout<<0<<endl;
                return;
            }


            int ans=0;
            vector<int>check(n);
            if(str[0]=='1'){
                for(int i=0;i<n;i++)if(str[i]=='0')ans++;

                cout<<ans<<endl;
                return;
            }
            else{

                  int zero=0;
                  for(int i=0;i<n;i++){
                    if(str[i]=='0')zero++;
                    else zero--;
                    check[i]=zero;
                  }

            }
            int mx=-1e6;
            int ind;
            for(int i=0;i<n;i++){
                 if(check[i]>=mx){
                    ind=i;
                    mx=check[i];
                 }
            }

            int one=0;
            int zer=0;
            for(int i=0;i<=ind;i++){
                if(str[i]=='1')one++;
            }
            for(int i=n-1;i>ind;i--){
                if(str[i]=='0')zer++;
            }

            cout<<one+zer<<endl;


}
int main(){
  int t;cin>>t;while(t--)solve();
return 0;
}
