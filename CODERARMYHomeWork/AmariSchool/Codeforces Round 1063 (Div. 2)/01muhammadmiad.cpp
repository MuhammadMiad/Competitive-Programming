#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
  int t;cin>>t;while(t--){
    int n;cin>>n;
    if(n%2){
        cout<<0<<endl;
        continue;
    }
    int total=0;
    if(n%4){
       total+=n/4;
       n%=4;
       total+=n/2;
    }
    else{
        total+=n/4;
        total++;
    }

    cout<<total<<endl;
  }
return 0;
}
