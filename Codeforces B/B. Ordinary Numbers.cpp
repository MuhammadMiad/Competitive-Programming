#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
bool  solve(ll n){
    set<ll>st;

while(n!=0){
    int x=n%10;
    n/=10;
    st.insert(x);

}
if(st.size()==1)return true;
else return false;


}
int main(){
    int t;
    cin>>t;
    while(t--){
     ll n;
     cin>>n;
             int co=0;
        for(int i=1;i<=n;i++){
    if(solve(i)==1) co++;
     }
     cout<<co<<endl;
    }
//    for(int i=0;i<v.size();i++){
//        cout<<v[i]<<endl;
//    }
return 0;
}
