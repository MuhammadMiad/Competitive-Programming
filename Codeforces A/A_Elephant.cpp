#include<bits/stdc++.h>
using namespace std;
int main(){
int x,n,ans1=0,ans2=0;
cin>>x;
ans1=floor(x/5);
n=x%5;
for(int i=5;i>=1;i--){
    if(n%i==0){
        ans2=n/i;
        break;
    }
}
cout<<ans1+ans2<<endl;
return 0;
}
