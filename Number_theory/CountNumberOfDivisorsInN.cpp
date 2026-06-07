#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
set<int>st;
void Divisor(ll  n){

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
    int n;
    cin>>n;
    Divisor(n);
    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
st.clear();
}



return 0;
}
