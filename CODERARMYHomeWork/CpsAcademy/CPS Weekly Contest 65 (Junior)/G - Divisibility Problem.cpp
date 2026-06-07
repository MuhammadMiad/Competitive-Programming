#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;cin>>t;
    while(t--){
      ll a,b;
      cin>>a>>b;
      if(a>b){
        if(a%b==0)cout<<0<<endl;
        else cout<<b-a%b<<endl;
      }
      else{
        cout<<b-a<<endl;
      }

    }

return 0;
}

