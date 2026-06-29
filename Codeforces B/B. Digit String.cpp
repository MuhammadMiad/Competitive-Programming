#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
             string str;cin>>str;
             int  two=0,ans=0;
             for(auto &c:str){
                if(c=='2')two++;
                else  if(c=='1' || c=='3'){
                    ans=max(ans+1,two+1);
                }
             }

             cout<<str.size()-max(ans,two)<<endl;

}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}
