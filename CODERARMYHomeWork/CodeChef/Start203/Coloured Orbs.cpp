#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,b;
    cin>>r>>b;
    if(r>b)cout<<b*5+(r-b)*1<<endl;
    else cout<<r*5+(b-r)*2<<endl;

return 0;
}
