#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1;i<=n;i++){
//    char ch='a'+i-1;
for(int j=1;j<=i;j++){
    char ch='a'+j-1;
    cout<<ch<<" ";
}
cout<<endl;
}
return 0;
}

