#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
 int n,k;cin>>n>>k;
 unordered_set<int>st1,st2;
 while(k--){
    ll x,y;cin>>x>>y;
    st1.insert(x);
    st2.insert(y);
    cout<<(n-st1.size())*(n-st2.size())<<endl;
 }

return 0;
}
