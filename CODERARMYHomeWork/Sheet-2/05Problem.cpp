#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int mx=INT_MIN;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(mx<x)mx=x;
}
cout<<mx<<endl;

return 0;
}
