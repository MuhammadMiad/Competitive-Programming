#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y){
if(y==0)return x;
else return gcd(y,x%y);
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int mx=-1;
    int x;
    for(int i=1;i<n;i++){
        int ans=gcd(n,i);
        if(mx<ans+i){
        mx=ans+i;
        x=i;
        }
    }cout<<x<<endl;
}

return 0;
}
