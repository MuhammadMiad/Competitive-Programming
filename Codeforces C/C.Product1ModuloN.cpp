#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll GCD (ll a, ll b){
if(b==0) return a;
else return GCD(b,a%b);

}
int main(){
ll n;
cin>>n;
vector<ll>v;
for(ll i=1;i<n;i++){
    if(GCD(n,i)==1) v.push_back(i);
}
int p=1;
for(int i=0;i<v.size();i++){
     p=(p*v[i])%n;
}
if(p==1){
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
else{
        cout<<v.size()-1<<endl;
    for(int i=0;i<v.size();i++){
        if(v[i]==p) continue;
        cout<<v[i]<< " ";
    }
    cout<<endl;
}

return 0;
}
