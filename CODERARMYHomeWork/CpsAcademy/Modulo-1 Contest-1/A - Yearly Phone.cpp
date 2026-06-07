#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=n%100;
    if(x==0)cout<<"k00"<<endl;
    else if(x<10)cout<<"k0"<<x<<endl;
    else cout<<"k"<<x<<endl;


return 0;
}
