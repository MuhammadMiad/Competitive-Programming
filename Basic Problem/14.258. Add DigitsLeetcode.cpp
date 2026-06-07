#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cin>>num;
while(num>9){
    int ans=0;
    while(num!=0){
        ans+=num%10;
        num/=10;
    }
    num=ans;
}
cout<<num<<endl;

return 0;
}
