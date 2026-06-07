#include<bits/stdc++.h>
using namespace std;
void solve(){
    string str;cin>>str;
    int n=str.size();
    vector<int>ar(n+1);
    for(int i=0;i<n;i++){
        ar[i]=str[i]-'0';
    }
    for(int i=1;i<n;i++){
        ar[i]+=ar[i-1];
    }
    int ans=1000;
    for(int i=0;i<n;i++){
        ans=min({ans,(ar[i]+(n-i-1-(ar[n-1]-ar[i]))),(i+1-ar[i]+ar[n-1]-ar[i])});
    }
    /// 1 index based kaj korle, sohoje buja zeto
    cout<<ans<<endl;

}
int main(){
 int t;cin>>t;
 while(t--){
    solve();
 }


return 0;
}
