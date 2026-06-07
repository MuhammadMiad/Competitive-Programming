#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x==0 and y==0){
            cout<<0<<endl;
            continue;
        }
        long double a,b,root;
        a=pow(x,2);
        b=pow(y,2);
        root=sqrt(a+b);
        ll s=root;
        if(s==root){
            cout<<1<<endl;
            continue;
        }
        else cout<<2<<endl;


    }



return 0;
}
