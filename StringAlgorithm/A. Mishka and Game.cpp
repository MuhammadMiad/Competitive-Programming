#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b;
cin>>n;
int c=0,m=0;
for(int i=0;i<n;i++){
    cin>>a>>b;
    if(a>b)m++;
    else if(a<b)c++;
}
if(m>c)cout<< "Mishka"<<endl;
else if(m<c)cout<< "Chris"<<endl;
else cout<< "Friendship is magic!^^"<<endl;

return 0;
}
