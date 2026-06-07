#include<bits/stdc++.h>
using namespace std;
bool prime(int num){
    if(num<2)return false;
    if(num<=3)return true;
    if(num%2==0)return false;
    for(int i=3;i*i<=num;i+=2){
        if(num%i==0)return false;
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,k;
        cin>>n>>k;
        if(k==2 and n==1){
            cout<<"YES"<<endl;
            continue;
        }
        if(k>=2){
            cout<<"NO"<<endl;
            continue;
        }
        if(prime(n))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }


return 0;
}
