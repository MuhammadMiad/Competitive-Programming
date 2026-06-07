#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
for(int i=1;i<=n;i++){
    char ch='a'+i-1;
for(int j=1;j<=m;j++){
    cout<<ch<<" ";
}
cout<<endl;
}
return 0;
}
