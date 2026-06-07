#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,ans=1;
    string Fans;
    cin>>n;
    ans=pow(5,n);
     Fans=to_string (ans);
     if(n>1)
    cout<<"25"<<endl;
    else
        cout<<Fans[0]<<endl;
return 0;
}
