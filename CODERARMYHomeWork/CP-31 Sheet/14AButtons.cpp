#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x=c/2;
        int y=c-x;
        a+=y;
        b+=x;
        if(a>b)cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }

return 0;
}
