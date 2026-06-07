#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,n,m;
        cin>>a>>n>>m;
        if(abs(a-n)>abs(n-m))cout<<"YES"<<endl;
        else if(abs(a-m)>abs(n-m))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


return 0;
}
