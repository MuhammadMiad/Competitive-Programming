#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
             int n,a,b;cin>>n>>a>>b;
             if(a<b and (n-b)%2==0)cout<<"YES"<<endl;
             else if((n-a)%2==0  and (a-b)%2==0)cout<<"YES"<<endl;
             else cout<<"NO"<<endl;

}
int main(){
    int t;cin>>t;while(t--){
       solve();
    }
return 0;
}

