#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
set<int>st;
vector<int>v;
void Divisor(ll n){

for(int i=1;i<=sqrt(n);i++){
    if(n%i==0){
        ll x=i;
        ll y=n/i;
        st.insert(x);
        st.insert(y);
    }
}




}
int main(){
    int t;
    cin>>t;
    while(t--){
int n,k;
cin>>n>>k;
Divisor(n);


ll p,co=0,c;
for(auto it:st){
        co++;
    if(co==k){
         p=it;
         c=co;
         break;
    }
}
    if(c==k){
        v.push_back(p);
    }
    else{
        v.push_back(-1);
    }
     st.clear();
}

for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
return 0;
}
