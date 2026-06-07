#include<bits/stdc++.h>
using namespace std;
main(){
int n,m,t,i,j;
cin>>t;
while(t--){
cin>>n>>m;
for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
    if(i%4<2!=j%4<2)cout<<1<<" ";
    else cout<<0<<" ";
}
cout<<endl;
}


}
return 0;
}
