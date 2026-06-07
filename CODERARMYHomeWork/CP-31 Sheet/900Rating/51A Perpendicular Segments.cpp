#include<bits/stdc++.h>
using namespace std;
int main(){
int t;cin>>t;
while(t--){
    int x,y,k;
    cin>>x>>y>>k;
    int mn=min(x,min(y,k));
    cout<<"0 0 "<<mn<<" "<<mn<<endl;
    cout<<0<<" "<<mn<<" "<<mn<<" "<<0<<endl;
}

return 0;
}
