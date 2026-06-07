#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long long  a,b;
    cin>>a>>b;
    long long  mx=max(a,b);
    long long  mn=min(a,b);
    mn--;
    long long result1=(mx*(mx+1))/2;
    long long result2=(mn*(mn+1))/2;
    cout<<result1-result2<<endl;
}

return 0;
}
